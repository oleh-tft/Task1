#include<iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	void Init() {
		cout << "Input Numerator: ";
		cin >> numerator;
		cout << "Input Denominator: ";
		cin >> denominator;
	}

	void Print() {
		cout << "Fraction: " << numerator << "/" << denominator << endl;
	}
};

int main()
{
	Fraction fraction;
	fraction.Init();
	fraction.Print();
}