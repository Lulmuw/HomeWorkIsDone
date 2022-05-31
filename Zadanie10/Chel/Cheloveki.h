#pragma once
#include <iostream>;
using namespace std;

class human {
public:
	human(string new_name = "Dwayne", string new_midname = "Rock", string new_surname = "Johnson", int new_age = 50) {
		name = new_name;
		midname = new_midname;
		surname = new_surname;
		age = new_age;
	}
	virtual void print() = 0;
protected:
	string name, midname, surname;
	int age;
};

class student :public human {
public:
	student(string new_name = "Dwayne", string new_midname = "Rock", string new_surname = "Johnson", int new_age = 50, bool lesson = true)
		:human(new_name, new_midname, new_surname, new_age) {
		on_lesson = lesson;
	}
	void print() override {
		cout << "Ученик " << name << " \"" << midname << "\" " << surname << "; возраст: " << age;
		if (on_lesson) cout << "; На уроке" << endl;
		else cout << "; Не на уроке" << endl;
	}
private:
	bool on_lesson;
};

class boss :public human {
public:
	boss(string new_name = "Dwayne", string new_midname = "Rock", string new_surname = "Johnson", int new_age = 50, int new_number_of_workers = 1000000)
		:human(new_name, new_midname, new_surname, new_age) {
		number_of_workers = new_number_of_workers;
	}
	void print() override {
		cout << "Босс " << name << " \"" << midname << "\" " << surname << "; возраст: " << age << "; Работников " << number_of_workers << endl;
	}
private:
	int number_of_workers;
};