#include <iostream>
using namespace std;

int divide(long long int dividend, long long int divisor) {
	bool isneg = false;
	bool divisorneg, dividendneg;
	divisorneg = dividendneg = false;
	if (dividend < 0 && divisor > 0 || divisor < 0 && dividend > 0) {
		isneg = true;
		if (dividend < 0) {
			dividendneg = true;
			dividend = 0 - dividend;
		}
		else {
			divisorneg = true;
			divisor = 0 - divisor;
		}
	}
	if (dividend == 0) {
		return 0;
	}
	if (divisor == 1) {
		if (isneg == true) {
			return -1 * dividend;
		}
		else {
			return dividend;
		}
	}
	if (dividend == divisor) {
		if (isneg == true) {
			return -1 * 1;
		}
		return 1;
	}
	if (dividend < 0 && divisor < 0) {
		dividend = 0 - dividend;
		divisor = 0 - divisor;
	}
	if (dividend < divisor) {
		return 0;
	}
	long long int remainder = dividend - divisor;
	int i = 1;
	while (remainder > divisor) {
		remainder = remainder - divisor;
		i++;
	}
	if (isneg == true) {
		return -1 * i;
	}
	else {
		return i;
	}
}

int main() {
	long long int dividend = -2147483648LL;
	int divisor = 2;
	cout << "Result: " << divide(dividend, divisor);
}