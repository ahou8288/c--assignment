#include "player.h"

bool Player::s_initialised = false;
Player* Player::s_playerInstance = 0;

Player::Player()
{
}

Player* Player::getInstance() {
    if (s_initialised) {
        return s_playerInstance;
    } else {
        s_playerInstance = new Player();
        s_initialised = true;
        return s_playerInstance;
    }
}
