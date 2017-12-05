#include "Game.h"

Game game;

void setup() {
  // Init the Game
  game.init();

  game.score += 20;

}

void loop() {
  // Check to see, if a new Frame has to be rendered.
  if (game.update()) {
    
    // Initiated repaint of the scene.
    game.paint();
  }
  
}
