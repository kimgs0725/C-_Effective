#include <iostream>
#include <string>
#include <list>

class PhoneNumber {
 public:
  PhoneNumber(const std::string& number)
    : number_(number) {
  }
  ~PhoneNumber(){}
 private:
  std::string number_;
};

class ABEntry {
 public:
  ABEntry(const std::string& name, const std::string& address,
          const std::list<PhoneNumber>& phones);
 private:
  std::string theName;
  std::string theAddress;
  std::list<PhoneNumber> thePhones;
  int numTimesConsulted;
};

ABEntry::ABEntry(const std::string& name, const std::string& address,
                 const std::list<PhoneNumber>& phones)
  : theName(name),
    theAddress(address),
    thePhones(phones),
    numTimesConsulted(0){
}

int main() {
  std::list<PhoneNumber> phones;
  phones.push_back(PhoneNumber(std::string("01029406331")));
  phones.push_back(PhoneNumber(std::string("01042416332")));
  ABEntry abe("김경수", "부천시", phones);
  return 0;
}
