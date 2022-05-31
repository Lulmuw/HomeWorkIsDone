#pragma once
#include <iostream>

class circle
{
public:

	// Конструктор
	circle(double new_x, double new_y, double new_r)
		:x(new_x), y(new_y), r(new_r) {}

	// "Set'еры"
	void set_centre(double new_x, double new_y) {
	}

	void set_r(double new_r) {
		r = new_r;
	}

	// "Get'еры"
	int get_r() {
		return r;
	}

	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	// Площадь
	double circleSqr() {
		return 2 * r * 3.14;
	}

	// Деструктор
	~circle() = default;

private:
	double x;
	double y;
	double r;
};
