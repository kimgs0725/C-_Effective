#include <iostream>

class TimeKeeper {
  public:
    TimeKeeper();
    virtual ~TimeKeeper();
};

class AtomicClock : public TimeKeeper {
};

class WatchClock : public TimeKeeper {
};

class WristWatch : public TimeKeeper {
};

int main() {
  return 0;
}
