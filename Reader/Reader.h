//
// Created by vladimir on 10/31/17.
//

#ifndef LAB_4_READER_H
#define LAB_4_READER_H

#include <cstdint>
#include <fstream>

#include "ReaderExceptions.h"

class Reader {
public:
  Reader();
  Reader(const char* filename);
  void init(const char* filename);
  void close();
  bool getIsEndOfFile();
  uint64_t readNumber();
private:
  std::ifstream file;
};

#endif //LAB_4_READER_H
