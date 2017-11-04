#ifndef FILE_SYSTEM
#define FILE_SYSTEM

class FileSystem {
 public:
  FileSystem(){}
  std::size_t numDisks() const {
    return 1024;
  }
};

#endif
