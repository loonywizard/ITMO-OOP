//
// Created by vladimir on 10/31/17.
//

#ifndef LAB_4_WRITER_H
#define LAB_4_WRITER_H

#include <fstream>
#include <string>

class Writer {
public:
  Writer();
  Writer(const char* filename);
  void init(const char* filename);
  void close();
  void writeFactorization(std::string factorization);
private:
  std::ofstream file;
};

#endif //LAB_4_WRITER_H
