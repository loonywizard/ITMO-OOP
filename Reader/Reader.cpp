//
// Created by vladimir on 10/31/17.
//

#include "Reader.h"

Reader::Reader() = default;

Reader::Reader(const char* filename) {
  init(filename);
}

void Reader::init(const char* filename) {
  file.open(filename);

  if (!file.is_open()) {
    throw (NoFileException(filename));
  }
}

bool Reader::getIsEndOfFile() {
  return file.eof();
}

uint64_t Reader::readNumber() {
  if (file.eof()) {
    throw (EOFException());
    file.close();
  }

  uint64_t number;
  file >> number;

  return number;
}