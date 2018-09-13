#include <cstdio>
#include <string>

template <typename T>
class NamedObject {
  public:
    NamedObject(const char *name, const T& value);
    NamedObject(const std::string& name, const T& value);
  private:
    std::string nameValue;
    T objectValue;
};

int main() {
  NamedObject<int> no1("Smallest Prime Number", 2);
  NamedObject<int> no2(no1);
  return 0;
}
