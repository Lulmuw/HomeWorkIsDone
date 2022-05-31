#pragma once
#include <iostream>

class circle
{
public:

	// �����������
	circle(double new_x, double new_y, double new_r)
		:x(new_x), y(new_y), r(new_r) {}

	// "Set'���"
	void set_centre(double new_x, double new_y) {
	}

	void set_r(double new_r) {
		r = new_r;
	}

	// "Get'���"
	int get_r() {
		return r;
	}

	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	// �������
	double circleSqr() {
		return 2 * r * 3.14;
	}

	// ����������
	~circle() = default;

private:
	double x;
	double y;
	double r;
};
