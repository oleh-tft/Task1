#include<iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	void Init(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void Init() 
	{
		cout << "Input Numerator: ";
		cin >> numerator;
		cout << "Input Denominator: ";
		cin >> denominator;
	}

	void Print() 
	{
		cout << "Fraction: " << numerator << "/" << denominator << endl;
	}

	int getNumerator() 
	{
		return numerator;
	}

	int getDenominator() 
	{
		return denominator;
	}
};

int main()
{
	Fraction fraction;
	fraction.Init();
	fraction.Print();
}