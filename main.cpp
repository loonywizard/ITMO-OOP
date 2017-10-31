#include <iostream>

#include "Reader/Reader.h"
#include "Writer/Writer.h"

int main() {
  try {
    Reader reader("/home/vladimir/study/cpp/lab4/data.in");
    Writer writer("/home/vladimir/study/cpp/lab4/data.out");

    reader.close();
    writer.close();
  } catch (ReaderException& exception) {
    std::cerr << exception.what() << std::endl;
  }

  return 0;
}