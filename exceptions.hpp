#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

class ReturnException : public std::exception
{
public:
    int value;
    ReturnException(int value) : value(value) {}
};

#endif