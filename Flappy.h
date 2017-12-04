#ifndef FLAPPY_H
#define  FLAPPY_H

#include <stdint.h>
#include <Arduino.h>


class Flappy {
  public:
    void paint();

  private:
    uint8_t state;
    uint8_t currentSpriteIndex;
    uint8_t* sprites[];

    /**
     * Calculates the next sprite to be displayed
     */
    void animate();
};


#endif
