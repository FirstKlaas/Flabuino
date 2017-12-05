#include "Score.h"

Score::Score(): _score(0) {};

uint32_t Score::get() {
  return _score;
}

Score& Score::operator+=(const uint32_t& s) {
  _score += s;
  return *this;
}

Score& Score::operator-=(const uint32_t& s) {
  if (s > _score) {
    _score = 0;
  } else {
    _score -= s;
  }
  return *this;
}

Score& Score::operator*=(const uint32_t& s) {
  _score *= s;
  return *this;
}



