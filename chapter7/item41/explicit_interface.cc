#include <cstdio>

class ExplicitInterface {
  public:
    ExplicitInterface() {}
    virtual ~ExplicitInterface() {}
    virtual std::size_t size() const { return 4; }
    virtual bool empty() { return true; }
    int operator()() { return 4; }
};

void signet(ExplicitInterface &w) {
  if ( w.size() > 10 && w() ) {
    ExplicitInterface temp(w);
    temp.empty();
  }
}

int main(void) {
  ExplicitInterface a;
  signet(a);
  return 0;
}
