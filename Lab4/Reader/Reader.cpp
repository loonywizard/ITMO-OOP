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

void Reader::close() {
  file.close();
}

bool Reader::getIsEndOfFile() {
  return file.eof();
}

uint64_t Reader::readNumber() {
  if (file.eof()) {
    close();
    throw (EOFException());
  }

  uint64_t number;
  file >> number;

  return number;
}