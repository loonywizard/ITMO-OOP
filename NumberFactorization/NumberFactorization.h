//
// Created by vladimir on 10/31/17.
//

#ifndef LAB_4_NUMBERFACTORIZATION_H
#define LAB_4_NUMBERFACTORIZATION_H

#include <cstdint>
#include <vector>

class NumberFactorization {
public:
  NumberFactorization(const uint64_t _number);
  std::string toString();
private:
  void factorize() const;
  uint64_t number;
  std::vector<uint64_t> factorization;
};

#endif //LAB_4_NUMBERFACTORIZATION_H
