#include <iostream>

template <typename _T>
class Babo {
  typedef _T value_type;
  public:
    void Draw(void) {
      std::cout << sizeof(value_type) << "의 용량을 가진 클래스" << std::endl;
    }
  private:
    _T *p;
};

int main(void) {
  Babo<char> test1;
  test1.Draw();
  return 0;
}
