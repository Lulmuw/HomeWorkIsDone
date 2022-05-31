// algorithmConstructsC++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

double solveY(double a, double x) {
	if (a <= x) {
		if (x + a <= 0) { throw invalid_argument("log(x + a) do not exist if x + a <= 0"); }
		return a + log(x + a);
	}
	if (sin(a * x) <= 0) { throw invalid_argument("log(x + a) do not exist if x + a <= 0"); }
	return sqrt(sin(a * x));
}

void solveT(double a, double x) {
	
	double y = solveY(a, x), t;
	
	if (a > y) {
		if (abs(x - a) < 0.000001) { throw invalid_argument("division by zero case a > y"); }
		t = y / (a - x);
	}
	else if (abs(a - y) < 0.000001) {
		if (abs(x - a) < 0.000001 || abs(y) < 0.000001) { throw invalid_argument("division by zero case a=y"); }
		t = (y / (a - x)) + (a + x) / pow(y, 2);
	}
	else {
		if (abs(a * x - 3.14 / 2) < 0.000001) { throw invalid_argument("division by zero case a > y"); }
		t = tan(a * x) + cos(2 * a * y);
	}

	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

}

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 3.5, x = -0.7;
	//cin >> a >> b;
	try {
		solveT(a, x);
	}
	catch (invalid_argument) {
		cout << "Возникла ошибка, при введённых значениях невозможно вычислить значение функций!\n";
	}
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
