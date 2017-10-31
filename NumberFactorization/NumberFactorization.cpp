//
// Created by vladimir on 10/31/17.
//

#include <iostream>
#include <vector>
#include "NumberFactorization.h"

NumberFactorization::NumberFactorization(const uint64_t _number) {
  number = _number;
  factorize();
}

std::string NumberFactorization::toString() {
  std::string str = "";
  for (int i = 0, length = factorization.size(); i < length; i++) {
    str += std::to_string(factorization[i]);
    if (i + 1 < length) {
      str += " * ";
    }
  }
  return str;
}

void NumberFactorization::factorize() {
  uint64_t divider = 2;
  uint64_t currentNumber = number;
  while (currentNumber > 1) {
    if (currentNumber % divider) {
      currentNumber = currentNumber / divider;
      factorization.push_back(divider);
    } else {
      divider++;
    }
  }
}