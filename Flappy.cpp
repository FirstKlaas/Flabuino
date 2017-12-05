#include "Flappy.h"

const static unsigned char PROGMEM flappy_up[] = {
  17,4,
  B00000011, B11110000, B00000000,
  B00001100, B01001000, B00000000,
  B00010000, B10000100, B00000000,
  B00100000, B10001010, B00000000
};

const static unsigned char PROGMEM flappy_mid[] = {
  8,2,
  B00000000,
  B00001100
};

const static unsigned char PROGMEM flappy_down[] = {
  8,2,
  B00000000,
  B00001100
};

Flappy::Flappy() : _state(0), _x(40), _y(40), _vx(0), _vy(0) 
{
  _numberOfLives = 3;
  _currentSpriteIndex = 0;
  _sprites[0] = flappy_up;
  _sprites[1] = flappy_mid;
  _sprites[2] = flappy_down;
  _sprites[3] = flappy_mid;
};

void Flappy::paint(Gamebuino& gb) {
  gb.display.drawBitmap(_x,_y,getSprite(),ROTCCW,NOFLIP);
};

void Flappy::update(uint32_t frameNumber) {
  _currentSpriteIndex = frameNumber && 3;
  _x += _vx;
  _y += _vy;
};

void Flappy::init() {
  
};

uint8_t* Flappy::getSprite() {
  return _sprites[_currentSpriteIndex];   
}

