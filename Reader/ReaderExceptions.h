//
// Created by vladimir on 10/31/17.
//

#ifndef LAB_4_READEREXCEPTIONS_H
#define LAB_4_READEREXCEPTIONS_H

#include <exception>
#include <iostream>
#include <string>
#include <cstring>

class ReaderException : public std::exception {
public:
  ReaderException() {}
  ReaderException(const char* _message) {
    message = _message;
  }

   const char* what() const throw() {
    return message;
  }
protected:
  const char* message;
};

class EOFException : public ReaderException {
public:
  EOFException() : ReaderException("EOF Exception") {}
};

class NoFileException : public ReaderException {
public:
  NoFileException(const std::string& _filename) {
    filename = _filename;
  }

  const char* what() const throw() {
    std::string message = "Cannot open file " + filename;
    return message.c_str();
  }
private:
  std::string filename;
};

#endif //LAB_4_READEREXCEPTIONS_H
