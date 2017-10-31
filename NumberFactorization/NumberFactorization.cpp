//
// Created by vladimir on 10/31/17.
//

#include <iostream>
#include "NumberFactorization.h"

NumberFactorization::NumberFactorization(const uint64_t _number) {
  number = _number;
  factorize();
}

std::string NumberFactorization::toString() {
  return "Hello World!";
}

void NumberFactorization::factorize() const {
  std::cout << "factorization in process!" << std::endl;
}