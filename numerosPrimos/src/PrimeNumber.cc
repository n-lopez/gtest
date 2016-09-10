#include "PrimeNumber.h"
PrimeNumber::PrimeNumber() {
}

PrimeNumber::~PrimeNumber() {
}

bool PrimeNumber::IsPrimeNumber(int number) {
	bool result = true;
	if (number < 0)
		throw NegativeNumberException();
	if (number < 2)
	    result = false;
	else{
		for (int i = number - 1; i > 1; i--) {
				if ((number % i) == 0)
					result = false;
		}
	}
	return result;
}
