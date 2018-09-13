#include <iostream>

#if 0
class Uncopyable {
  protected:
    Uncopyable() {}
    ~Uncopyable() {}
  private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);
};

// private 상속을 함으로써 복사생성자, 대입연산자 선언도 불가.
class HomeForSale : private Uncopyable{
  public:
    HomeForSale(){}
    ~HomeForSale(){}
};
#else
class HomeForSale {
  public:
    HomeForSale() {
      std::cout << "HomeForSale 생성자" << std::endl;
    }
    ~HomeForSale() {
      std::cout << "HomeForSale 소멸자" << std::endl;
    }
  private:
    // 복사 및 대입연산자를 막음
    HomeForSale(const HomeForSale& home) {
      std::cout << "HomeForSale 복사생성자" << std::endl;
    }
    HomeForSale& operator=(const HomeForSale& home) {
      std::cout << "HomeForSale 대입연산자" << std::endl;
    }
};
#endif

int main() {
  HomeForSale h1;
  //HomeForSale h2(h1);   // 복사생성자 정의가 private로 되어있어서 접근 불가
  //HomeForSale h3 = h1;  // 대입연산자 정의가 private로 되어있어서 접근 불가
  return 0;
}
