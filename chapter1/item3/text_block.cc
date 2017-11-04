#include <iostream>
#include <string>

/*
char greeting[] = "Hello";        // non-const pointer, non-const data
const char* p = greeting;         // non-const pointer, const data
char * const p = greeting;        // const pointer, non-const data
const char * const p = greeting;  // const pointer, const data
*/

class TextBlock {
 public:
  TextBlock(const std::string& text) :
    text_(text) {
  }
  ~TextBlock() {}
  const char& operator[](std::size_t position) const {
    std::cout << "const char& => ";
    return text_[position];
  }
  char& operator[](std::size_t position) {
    std::cout << "char& => ";
    return text_[position];
  }
 private:
  std::string text_;
};

void print(const TextBlock& ctb) {
  std::cout << ctb[0] << std::endl;
}

int main() {
  TextBlock tb("Hello");
  std::cout << tb[0] << std::endl;

  const TextBlock ctb("World");
  std::cout << ctb[0] << std::endl;

  print(tb);
  return 0;
}
