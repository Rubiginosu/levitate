#include "../lua/lua.hpp"
#include <cstdlib>
int load(){
    lua_State * L=NULL;     
    L = luaL_newstate();        
    luaL_openlibs(L);      
    luaL_dofile(L, "./plugins/example.lua");     
    lua_getglobal(L,"heloworld");   
    lua_pcall(L,0,0,0);  
    lua_getglobal(L,"heloAxo");
    lua_pushnumber(L, rand());
    lua_pcall(L,1,0,0); 
    lua_close(L);
    return 0;
}