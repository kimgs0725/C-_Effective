#include <cstdio>

class ImplicitInterface {
  public:
    ImplicitInterface() {}
    virtual ~ImplicitInterface() {}
    virtual std::size_t size() const { return 4; }
    virtual bool empty() { return true; }
    int operator()() { return 4; }
};

template <typename T>
void signet(T &w) {
  if ( w.size() > 10 && w() ) {
    T temp(w);
    temp.empty();
  }
}

int main(void) {
  ImplicitInterface a;
  signet(a);
  return 0;
}
