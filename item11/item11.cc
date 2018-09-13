#include <cstring>

class String {
  public:
    String(const char* value);
    ~String();

  private:
    char* data;
};

String::String(const char* value) {
  if (value) {
    data = new char[strlen(value) + 1];
    strcpy(data, value);
  } else {
    data = new char[1];
    *data = '\0';
  }
}

inline String::~String() {
  delete []data;
}

void doNothing(String localString) {}

void problem1() {
  String a("Hello");
  String b("World");
  b = a;
}

void problem2() {
  String a("Hello");
  {
    String b("World");
    b = a;
  }
  String c = a;
}

void problem3() {
  String s = "The Truth Is Out There";
  doNothing(s);
}

int main() {
  problem1();
  problem2();
  problem3();
  return 0;
}
