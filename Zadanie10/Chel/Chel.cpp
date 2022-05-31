#include <iostream>
#include "Cheloveki.h"

int main()
{
	setlocale(LC_ALL, "rus");
	boss legend = boss();
	student chel = student("Иван", "Ивонович", "Иванов", 17, true);
	legend.print();
	chel.print();
}