#!/usr/bin/python
import os,sys,Queue
flist=["src"]

def printf(a):
    sys.stdout.write(a)
    sys.stdout.flush()
linker_flag="-O3 -Ofast -std=gnu++11 "
comp_flag="-O3 -Ofast -std=gnu++11 "
tskq=Queue.Queue()
cnttot=1
cntall=0
fnlist=[]
def prepare():
    if os.path.isdir("build")==False:
        os.mkdir("build")
def compile(fn):
    global cnttot,cntall
    cmd="g++ -c "+comp_flag+"-o build/%s.o"%fn.replace("/","__")+" "+fn
    if os.system(cmd)!=0:
        print "a step failed.file: %s"%fn
        exit()
    else:
        printf("[%d/%d] %s\n"%(cnttot,cntall,fn))
        cnttot+=1
def link():
    cmd="g++ -o levitate "+linker_flag
    for i in fnlist:
        cmd+="build/"+i.replace("/","__")+".o "
    print cmd
    if os.system(cmd)!=0:
        print "error in linking"
    else:
        print "done"
def lessthan(a,b):
    if os.path.isfile(a):
        return os.path.getmtime(a)<os.path.getmtime(b)
    else:
        return 1
def compileit():
    global cnttot
    while tskq.empty()==False:
        fn=tskq.get()
        if lessthan("build/%s.o"%fn.replace("/","__"),fn):
            compile(fn)
        else:
        #    printf("skip\n")
            cnttot+=1
def build():
    global flist,cntall
    prepare()
    for z in flist:
        for fpath,fdir,fs in os.walk(z):
            for f in fs:
                fn=os.path.join(fpath,f)
                if fn[-4:]==".cpp" or fn[-2:]==".c":
                    fnlist.append(fn)
                    cntall+=1
                    tskq.put(fn)
    compileit()
    link()
def clean():
    os.rmdir("build")
    prepare()
build()