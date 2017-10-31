//
// Created by vladimir on 10/31/17.
//

#include "Writer.h"

Writer::Writer() {}

Writer::Writer(const char *filename) {
  init(filename);
}

void Writer::init(const char *filename) {
  file.open(filename);
}

void Writer::close() {
  file.close();
}

void Writer::writeFactorization(std::string factorization) {
  file << factorization << std::endl;
}
