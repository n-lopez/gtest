#ifndef PRIMENUMBER_H_
#define PRIMENUMBER_H_
#include "NegativeNumberException.h"

class PrimeNumber {
public:
	PrimeNumber();
	bool IsPrimeNumber(int number);
	virtual ~PrimeNumber();
};

#endif /* PRIMENUMBER_H_ */
