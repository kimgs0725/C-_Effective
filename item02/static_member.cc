#include <iostream>

//#define ENUM_HACK

#ifndef ENUM_HACK 
class GamePlayer {
 public:
  static const int NumTurns = 5;
  int scores[NumTurns];
};
#else
class GamePlayer {
 public:
  enum {NumTurns = 10};
  int scores[NumTurns];
};
#endif

int main() {
  GamePlayer g;
  for (int i = 0; i < g.NumTurns; ++i)
    g.scores[i] = i + 10;
  for (int i = 0; i < g.NumTurns; ++i)
    std::cout << "g.scores[" << i << "] = " << g.scores[i] << std::endl;
  return 0;
}
