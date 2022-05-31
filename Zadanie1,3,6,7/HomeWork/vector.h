#pragma once
#include <iostream>

class vectors
{
public:

	// �����������
	vectors(double new_x, double new_y, double new_z)
		:x(new_x), y(new_y), z(new_z) {}

	// "Set'���"
	void set_xyz(double new_x, double new_y, double new_z) {
		x = new_x;
		y = new_y;
		z = new_z;
	}

	// "Get'���"
	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	double get_z() {
		return z;
	}

	// ������ �������
	double vectorLen() {
		return sqrt(x * x + y * y + z * z);
	}

	// ����������
	~vectors() = default;

private:
	double x = 0;
	double y = 0;
	double z = 0;
};

// ����� ��������
vectors sum(vectors vector1, vectors vector2) {
	return vectors(vector1.get_x() + vector2.get_x(), vector1.get_y() + vector2.get_y(), vector1.get_z() + vector2.get_z());
}

// �������� ��������
vectors sub(vectors vector1, vectors vector2) {
	return vectors(vector1.get_x() - vector2.get_x(), vector1.get_y() - vector2.get_y(), vector1.get_z() - vector2.get_z());
}

// ��������� ������������
double multScalar(vectors vector1, vectors vector2) {
	return vector1.get_x() * vector2.get_x() + vector1.get_y() * vector2.get_y(), vector1.get_z()* vector2.get_z();
}

// ��������� ������������
vectors multVector(vectors vector1, vectors vector2) {
	return vectors(
		vector1.get_y() * vector2.get_z() - vector1.get_z() * vector2.get_y(),
		(-1) * (vector1.get_x() * vector2.get_z() - vector1.get_z() * vector2.get_x()),
		vector1.get_x() * vector2.get_y() - vector1.get_y() * vector2.get_x()
	);
}