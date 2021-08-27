#include "headers/menu.h"
#include "headers/common.h"

namespace MENU {

namespace {
    // int mainMenuStatusFlag = MAX_NUM_MAIN_MENU_STATUS_FLAG;
    

    void startNewGame() {
        ;
    }

    void exitMenu() {
        exit(0); // exit successfully
    }

    void soloLoop() {
        clearScreen();
        char ch = inputChar();
        

    }

    void startMenu() {
        while(true) {
            soloLoop();
        }
    }

} // namespace

} // namespace MENU
