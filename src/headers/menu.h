#ifndef MENU_H
#define MENU_H

namespace MENU {
    enum MainMenuStatusFlag {
        FLAG_NULL,
        FLAG_START_NEW_GAME,
        FLAG_SHOW_HISTORY,
        FLAG_SELECT_HISTORY,
        FLAG_EXIT_GAME,
        MAX_NUM_MAIN_MENU_STATUS_FLAG
    };

    void startMenu();
} // namespace MENU

#endif
