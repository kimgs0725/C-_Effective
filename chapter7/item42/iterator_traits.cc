#include <iostream>
#include <vector>

template <typename IterT>
void printWithIterator(IterT iter) {
  typename std::iterator_traits<IterT>::value_type temp(*iter);
  std::cout << temp << std::endl;
}

int main() {
  std::vector<int> a;
  for (int i = 0; i < 10; ++i)
    a.push_back(i+1);
  for (std::vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
    printWithIterator(iter);
  return 0;
}
