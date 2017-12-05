#ifndef GAME_H
#define GAME_H

#include <Gamebuino.h>
#include "Flappy.h"
#include "Score.h"

class Game {
  public:
    Flappy flappy;
    Gamebuino gb;
    Score score;

    Game();
    void init();
    void paint();
    boolean update();
    uint8_t getLevel();
    void setLevel(uint8_t lvl); 
    
  private:
    uint8_t _level; 
};

#endif
