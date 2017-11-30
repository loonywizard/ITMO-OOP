#include <iostream>

#include "Reader/Reader.h"
#include "Writer/Writer.h"
#include "NumberFactorization/NumberFactorization.h"

int main() {
  try {
    Reader reader("/home/vladimir/development/OOP/lab4/data.in");
    Writer writer("/home/vladimir/development/OOP/lab4/data.out");

    while (reader.getIsEndOfFile() == false) {
      uint64_t number = reader.readNumber();
      NumberFactorization numberFactorization(number);
      writer.writeFactorization(numberFactorization.toString());
    }

    reader.close();
    writer.close();
  } catch (ReaderException& exception) {
    std::cerr << exception.what() << std::endl;
  }

  return 0;
}