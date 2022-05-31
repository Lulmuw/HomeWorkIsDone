#pragma once
#include <iostream>
using namespace std;

class ekran {
public:
	ekran(int new_x = 640, int new_y = 480) {
		x = new_x;
		y = new_y;
	}
	virtual void resolution() = 0;
protected:
	int x, y;
};

class klava {
public:
	klava(int new_kol_vo = 33) {
		kol_vo_knopok = new_kol_vo;
	}
	virtual void najat_na_knopku(int knop) = 0;
protected:
	int kol_vo_knopok;
};

class notebook:public ekran, public klava {
public:
	notebook(int new_x = 640, int new_y = 480, int new_kol_vo = 33, bool turned = false) :ekran(new_x, new_y), klava(new_kol_vo) {
		turned_on = turned;
	}
	void resolution() override {
		cout << "���������� ������ ��������:" << x << "x" << y << endl;
	}
	void najat_na_knopku(int knop) override {
		if (knop > 0 and knop <= kol_vo_knopok) cout << "�� ������ �� ������ " << knop << endl;
		else cout << "��� ����� ������\n";
	}
	void osmotr() {
		cout << "��� �������\n� ���� " << kol_vo_knopok << " ������ �� ����������\n";
		this->resolution();
		if (turned_on) cout << "�� �������\n";
		else cout << "�� ��������\n";
	}
private:
	bool turned_on;
};

class phone :public ekran, public klava {
public:
	phone(int new_x = 60, int new_y = 80, int new_kol_vo = 16, bool turned = false) :ekran(new_x, new_y), klava(new_kol_vo) {
		turned_on = turned;
	}
	void resolution() override {
		cout << "���������� ������ ��������:" << x << "x" << y << endl;
	}
	void najat_na_knopku(int knop) override {
		if (knop > 0 and knop <= kol_vo_knopok) cout << "�� ������ �� ������ " << knop << endl;
		else cout << "��� ����� ������\n";
	}
	void osmotr() {
		cout << "��� �������\n� ���� " << kol_vo_knopok << " ������ �� ����������\n";
		this->resolution();
		if (turned_on) cout << "�� �������\n";
		else cout << "�� ��������\n";
	}
private:
	bool turned_on;
};

class komp :public ekran, public klava {
public:
	komp(int new_x = 2000, int new_y = 5, int new_kol_vo = 50, bool turned = false) :ekran(new_x, new_y), klava(new_kol_vo) {
		turned_on = turned;
	}
	void resolution() override {
		cout << "���������� ������ ������������� ����������:" << x << "x" << y << endl;
	}
	void najat_na_knopku(int knop) override {
		if (knop > 0 and knop <= kol_vo_knopok) cout << "�� ������ �� ������ " << knop << endl;
		else cout << "��� ����� ������\n";
	}
	void osmotr() {
		cout << "��� ������������ ���������\n� ���� " << kol_vo_knopok << " ������ �� ����������\n";
		this->resolution();
		if (turned_on) cout << "�� �������\n";
		else cout << "�� ��������\n";
	}
private:
	bool turned_on;
};