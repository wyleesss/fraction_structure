#include <iostream>

using namespace std;

struct Fraction {
	int numerator = 0, denominator = 1;
};


long double inline multiply(Fraction A, Fraction B) {
	return (static_cast<float>(A.numerator) * B.numerator) / (A.denominator * B.denominator);
}

int main() {
	Fraction division, ratio;
	cout << "first fraction. input'\nnumerator -> ";
	cin >> division.numerator;
	cout << "denominator -> ";
	cin >> division.denominator;
	cout << "second fraction. input'\nnumerator -> ";
	cin >> ratio.numerator;
	cout << "denominator -> ";
	cin >> ratio.denominator;
	cout << endl << multiply(division, ratio);
}