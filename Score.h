#ifndef SCORE_H
#define SCORE_H

#include <stdint.h>
#include <Arduino.h>

class Score {
  public:
    Score();
    uint32_t get();

    Score& operator+=(const uint32_t& s);
    Score& operator-=(const uint32_t& s);
    Score& operator*=(const uint32_t& s);

  private:
    uint32_t _score;
};

#endif

