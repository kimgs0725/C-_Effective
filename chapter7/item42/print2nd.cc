#include <iostream>
#include <vector>

template <typename C>
void print2nd(const C& container) {
  if (container.size() >= 2) {
    typename C::const_iterator iter(container.begin());

    ++iter;
    int value = *iter;
    std::cout << value;
  }
}

int main() {
  std::vector<int> a;
  for (int i = 0; i < 10; ++i)
    a.push_back(i+1);
  print2nd(a);
  return 0;
}
