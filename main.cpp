#include "config/CConfig.h"
#include "utils/format_output.h"
int main() {
    out("Welcome to Levitate.");
    out("Reading config file");
    CConfig c("./levitate.ini");
    return 0;
}