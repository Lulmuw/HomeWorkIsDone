#include <iostream>
#include <vector>
#include "computers.h"
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	cout << "\tЗадание 11 осмотр 3-ех классов наследников 2-ух базовых классов: клавиатура и экран\n\n";
	notebook obj1 = notebook();
	phone obj2 = phone(true);
	komp obj3 = komp(true);

	std::cout << "Смотрим на ноут\n\n";
	obj1.osmotr();
	obj1.najat_na_knopku(2);

	std::cout << "\nСмотрим на телефон\n\n";
	obj2.osmotr();
	obj2.najat_na_knopku(16);

	std::cout << "\nСмотрим на комп\n\n";
	obj3.osmotr();
	obj3.najat_na_knopku(600);

	// Часть программы на 12 задание "Случайно сгенерированная база данных о случайном колличестве ноутбуков"
	cout << "\n\n\n\tЗадание 12 из домашней работы\n\t\"Случайно сгенерированная база данных о случайном колличестве ноутбуков\" с помощью библиотеки STL\n";
	vector<notebook> storage;
	int kol_vo = rand() % 50 + 1;
	for (int i = 0; i < kol_vo; i++) {
		storage.push_back(notebook(rand() % 320 + 321, rand() % 240 + 241, rand() % 33 + 1, rand() % 2));
		storage[i].osmotr();
		cout << "\t Это был " << i+1 << "-й ноутбук\n\n";
	}
	for (int i = 0; i < kol_vo; i++) storage.pop_back();
}