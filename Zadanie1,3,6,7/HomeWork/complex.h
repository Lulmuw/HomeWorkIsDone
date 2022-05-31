#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class complex {

private:
	double deistv;
	double i_chast;

public:
	complex(double newReal, double newImaginable);
	// ���������� ����� �����
	double getDeistv();
	// ���������� ������ ����� 
	double getI_chast();

	~complex();
};

// ������� ���������� ����� ��� �������
complex sopr(complex num);
// ����������� ������ � ����������� �����
complex strToComplex(string str);
// ������ ������������ �����
double abs(complex num);

complex operator+(complex com, int num);
complex operator+(complex com, double num);
complex operator+(complex num1, complex num2);
complex operator-(complex com, int num);
complex operator-(complex com, double num);
complex operator-(int num, complex com);
complex operator-(double num, complex com);
complex operator-(complex num1, complex num2);
complex operator*(complex com, int num);
complex operator*(complex com, double num);
complex operator* (complex num1, complex num2);
complex operator/(complex com, int num);
complex operator/(complex com, double num);
complex operator/(complex num1, complex num2);

ostream& operator<<(ostream& os, complex com);