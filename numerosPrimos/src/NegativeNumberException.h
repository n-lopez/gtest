#ifndef NegativeNumberException_H
#define NegativeNumberException_H

#include <exception>

using namespace std;

class NegativeNumberException : public exception
{
public:
    const char* what() const throw()
    {
        return "Error: Número negativo";
    }
};
#endif // NegativeNumberException_H


