#include "Game.h"

Game::Game() : _level(1) {
   
};

boolean Game::update() {
  if (!gb.update()) return false;
  flappy.update(gb.frameCount);
  
  return true;
};

void Game::init() {
  flappy.init();
};

void Game::paint() {
  flappy.paint(gb);
};

uint8_t Game::getLevel() {
  return _level;
};

void Game::setLevel(uint8_t lvl) {
  if (_level < 1) return;
  _level = lvl;
};

