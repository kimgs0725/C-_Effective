#include <iostream>
#include <string>

class CompanyA {
  public:
    void sendClearText(const std::string& msg) {}
    void sendEncryted(const std::string& msg) {}
};

class CompanyB {
  public:
    void sendClearText(const std::string& msg) {}
    void sendEncryted(const std::string& msg) {}
};

template <typename Company>
class MsgSender {
  public:
    void sendClear(const std::string& info) {
      std::string msg = info;
      Company c;
      c.sendClearText(msg);
    }
    void sendSecret(const std::string& info) {
      std::string msg = info;
      Company c;
      c.sendEncryted(msg);
    }
};

template <typename Company>
class LoggingMsgSender: public MsgSender<Company> {
  public:
    // 2nd
    //using MsgSender<Company>::sendClear;
    //using MsgSender<Company>::sendSecret;
    void sendClearMsg(const std::string& info) {
      std::cout << "Logging Clear Msg Sender start" << std::endl;
      //this->sendClear(info);  // 1st
      MsgSender<Company>::sendClear(info);  // 3rd
      std::cout << "Logging Clear Msg Sender end" << std::endl;
    }
    void sendSecretMsg(const std::string& info) {
      std::cout << "Logging Secret Msg Sender start" << std::endl;
      //this->sendSecret(info);   // 1st
      MsgSender<Company>::sendSecret(info);   // 3rd
      std::cout << "Logging Secret Msg Sender end" << std::endl;
    }
};

int main() {
  LoggingMsgSender<CompanyA> cA;
  LoggingMsgSender<CompanyB> cB;

  cA.sendClearMsg("clear A");
  cB.sendSecretMsg("secret B");

  return 0;
}
