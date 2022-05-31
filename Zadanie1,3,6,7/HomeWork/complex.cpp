#include "complex.h"

complex::complex(double newReal = 0.0, double newImaginable = 0.0)
{
	deistv = newReal;
	i_chast = newImaginable;
}

double complex::getDeistv()
{
	return deistv;
}

double complex::getI_chast()
{
	return i_chast;
}

complex::~complex() = default;

complex sopr(complex num)
{
	return complex(num.getDeistv(), -1 * num.getI_chast());
}

// Работает на формат записи n+mi, где n и m обязательно должны присутствовать даже если они 0 или 1!
complex strToComplex(string str)
{
	double realPart, imPart;
	realPart = stod(str);
	for (int i = 1; i < str.length(); i++) {
		if ((str[i] == '+') or (str[i] == '-')) {
			str.erase(0, i);
			break;
		}
	}
	imPart = stod(str);
	return complex(realPart, imPart);
}

double abs(complex num)
{
	double realPart = num.getDeistv();
	double imPart = num.getI_chast();
	return sqrt(realPart * realPart + imPart * imPart);
}

complex operator+(complex com, int num)
{
	return complex(com.getDeistv() + num, com.getI_chast());
}

complex operator+(complex com, double num)
{
	return complex(com.getDeistv() + num, com.getI_chast());
}

complex operator+(complex num1, complex num2)
{
	return complex(num1.getDeistv() + num2.getDeistv(), num1.getI_chast() + num2.getI_chast());
}

complex operator-(complex com, int num) {
	return complex(com.getDeistv() - num, com.getI_chast());
}

complex operator-(complex com, double num)
{
	return complex(com.getDeistv() - num, com.getI_chast());
}

complex operator-(int num, complex com) {
	return complex(num - com.getDeistv(), 0 - com.getI_chast());
}

complex operator-(double num, complex com)
{
	return complex(num - com.getDeistv(), com.getI_chast());
}

complex operator-(complex num1, complex num2)
{
	return complex(num1.getDeistv() - num2.getDeistv(), num1.getI_chast() - num2.getI_chast());
}

complex operator*(complex com, int num) {
	return complex(com.getDeistv() * num, com.getI_chast() * num);
}

complex operator*(complex com, double num)
{
	return complex(com.getDeistv() * num, com.getI_chast() * num);
}

complex operator*(complex num1, complex num2)
{
	return complex(num1.getDeistv() * num2.getDeistv() - num1.getI_chast() * num2.getI_chast(), num1.getDeistv() * num2.getI_chast() + num2.getDeistv() * num1.getI_chast());
}

complex operator/(complex com, int num) {
	return complex(com.getDeistv() / num, com.getI_chast() / num);
}

complex operator/(complex com, double num)
{
	return complex(com.getDeistv() / num, com.getI_chast() / num);
}

complex operator/(complex num1, complex num2)
{
	return (num1 * sopr(num2)) / (num2.getDeistv() * num2.getDeistv() - num2.getI_chast() * num2.getI_chast());
}

ostream& operator<<(ostream& os, complex com) {
	return os << com.getDeistv() << "+(" << com.getI_chast() << "i)";
}