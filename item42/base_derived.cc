#include <iostream>

template <typename T>
class Base {
  public:
    class Nested {
      public:
        Nested(int x)
          : x_(x) {
        }
      private:
        int x_;
    };
    Base() {
    }
};

template <typename T>
class Derived : public Base<T>::Nested {
  public:
    explicit Derived(int x)
      : Base<T>::Nested(x) {
      typename Base<T>::Nested temp(x+1);
    }
};

int main() {
  Derived<int> child(2);
  return 0;
}
