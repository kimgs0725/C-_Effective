#include <iostream>
#include "file_sys.h"

FileSystem& tfs() {
  static FileSystem fs;
  return fs;
}

class Directory {
 public:
  Directory() {
    std::size_t disks = tfs().numDisks();
  }
  ~Directory(){}
};

int main() {
  Directory dir;
  return 0;
}
