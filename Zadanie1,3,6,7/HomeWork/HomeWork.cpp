#include <iostream>
#include <fstream>
#include <vector>
#include "vector.h"
#include "complex.h"
#include "circle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	complex com1 = complex(1, 1);
	cout << com1 << endl << com1 + 1 << endl << com1 + 0.5 << endl << com1 * 10 << endl << com1 + complex(1, 1) << endl;

	complex com2 = complex(2, 0);
	cout << com1 / com2 << endl << com2 / com2 << endl << com1 * com2 << endl << com1 - com2 << endl << endl;

	circle krug = circle(1, 1, 1);
	cout << "Площадь круга радиуса 1 с центром 1:1 = " << krug.circleSqr() << endl;
	krug.set_centre(2, 2);
	krug.set_r(2);
	cout << "Площадь круга радиуса 2 с центром 2:2 = " << krug.circleSqr() << endl;

	vectors vec = vectors(1,0,0);
	cout << "Длинна вектора с координатами 1:0:0 = " << vec.vectorLen() << endl;

	vectors vec2 = vectors(0, 1, 0), vecSum = sum(vec, vec2);
	cout << "Координаты вектора суммы векторов 1:0:0 и 0:1:0 равны " << vecSum.get_x() << ":" << vecSum.get_y() << ":" << vecSum.get_z() << endl;

	vecSum = multVector(vec, vec2);
	cout << "Координаты вектора их векторного произведения равны " << vecSum.get_x() << ":" << vecSum.get_y() << ":" << vecSum.get_z() << endl;
	
	cout << "Считывание из файла\n";
	ifstream file;
	string len, str;
	double absValue = -1;
	int absIndex;

	file.open("TEXT.txt", ios::in);
	getline(file, len);
	vector<complex> comArr;
	comArr.reserve(stoi(len));
	for (int i = 0; i < stoi(len); i++) {
		getline(file, str);
		cout << str << endl;
		comArr.push_back(strToComplex(str));
		if (abs(comArr.at(i)) > absValue) {
			absIndex = i;
			absValue = abs(comArr.at(i));
		}
	}
	cout << "Число = ";
	cout << comArr.at(absIndex);
	cout << "Модуль = " << absValue << endl;

	while (!comArr.empty()) comArr.pop_back();

}