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

void NumberFactorization::checkFactorization() {
  uint64_t n = 1;
  for (int i = 0, length = factorization.size(); i < length; i++) {
    n *= factorization[i];
  }

  if (n != number) {
    std::cerr << "Factorization is not working properly" << std::endl;
  }
}