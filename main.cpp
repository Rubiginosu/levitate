#include "config/CConfig.h"
#include "lang/lanpkg/zh-CN/CZh_CN.h"
#include "lang/CFormat.h"

int main() {
    CConfig c("./levitate.ini");
    if(c.getAttr("language") == "zh-CN"){
        CZh_CN lanpkg;
        CFormat fmt(lanpkg);
        fmt.output(LANGUAGE_HELLO) << endl;
    }
    return 0;
}