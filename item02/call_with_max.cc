#include <iostream>

void f(int p) {
  std::cout << p << std::endl;
}

#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

inline void callWithMax(const int& a, const int& b) {
  f(a > b ? a : b);
}

int main() {
  int a = 7, b = 4;
  std::cout << "call_with_max inline = ";
  callWithMax(++a, b);
  a = 7;
  std::cout << "call_with_max define = ";
  CALL_WITH_MAX(++a, b);
  return 0;
}
