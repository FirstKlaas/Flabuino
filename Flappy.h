#ifndef FLAPPY_H
#define  FLAPPY_H

#include <stdint.h>
#include <Arduino.h>
#include <Gamebuino.h>

class Flappy {
  public:
    Flappy();
    void paint(Gamebuino& gb);
    void init();
    void setSpeed(int8_t x_speed, int8_t y_speed);
    uint8_t* getSprite();
    void update(uint32_t frameNumber);

  private:
    uint8_t* _sprites[4];
    uint8_t _numberOfLives, _currentSpriteIndex, _state; 
    int8_t _x, _y, _vx, _vy;

    /**
     * Calculates the next sprite to be displayed
     */
    void animate();
};


#endif
