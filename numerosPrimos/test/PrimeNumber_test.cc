#include "../src/PrimeNumber.h"
#include "gtest/gtest.h"

TEST(PrimeNumber, FirstPrimeNumber) {
	ASSERT_EQ(true, PrimeNumber().IsPrimeNumber(2));
}

TEST(PrimeNumber, SecondPrimeNumber) {
	ASSERT_EQ(true,PrimeNumber().IsPrimeNumber(3));
}

TEST(PrimeNumber, ThirdPrimeNumber) {
	ASSERT_EQ(true,PrimeNumber().IsPrimeNumber(5));
}

TEST(PrimeNumber, FourthPrimeNumber) {
	ASSERT_EQ(true,PrimeNumber().IsPrimeNumber(7));
}

TEST(PrimeNumber, FifthPrimeNumber) {
	ASSERT_EQ(true,PrimeNumber().IsPrimeNumber(11));
}

TEST(PrimeNumber, TwentySixthPrimeNumber) {
	ASSERT_EQ(true, PrimeNumber().IsPrimeNumber(101));
}

TEST(PrimeNumber, NumberZeroNotPrime) {
	ASSERT_EQ(false,PrimeNumber().IsPrimeNumber(0));
}

TEST(PrimeNumber, NumberOneNotPrime) {
	ASSERT_EQ(false,PrimeNumber().IsPrimeNumber(1));
}

TEST(PrimeNumber, NumberFourNotPrime) {
	ASSERT_EQ(false, PrimeNumber().IsPrimeNumber(4));
}

TEST(PrimeNumber, NegativeNumberExceptionThrow){
	ASSERT_THROW(PrimeNumber().IsPrimeNumber(-1), NegativeNumberException);
}

