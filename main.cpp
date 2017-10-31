#include <iostream>

#include "Reader/Reader.h"
#include <cstdint>

int main() {
  try {
    Reader reader("/home/vladimir/study/cpp/lab4/data.1txt");
    uint64_t a = reader.readNumber();
    uint64_t b = reader.readNumber();
    uint64_t c = reader.readNumber();
    std::cout << a << ", " << b << ", " << c << std::endl;
  } catch (ReaderException& exception) {
    std::cerr << exception.what() << std::endl;
  }
  return 0;
}