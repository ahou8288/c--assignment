#ifndef PLAYER_H
#define PLAYER_H


class Player
{
public:
    static Player* getInstance();
private:
    Player();
    static bool s_initialised;
    static Player* s_playerInstance;
    int point_score=0;
};

#endif // PLAYER_H
