#pragma once
#include <iostream>

using namespace std;

class student {
public:
	student(string new_name = "", string new_familia = "", int new_vozrast = 0, string new_nomerZach = "", string new_group = "");

	void setName(string new_name);
	void setFamilia(string new_familia);
	void setVozrast(int new_vozrast);
	void setNomerZach(string new_nomerZach);
	void setGroup(string new_group);

	string getName(student kto);
	string getFamilia(student kto);
	int getVozrast(student kto);
	string getNomerZach(student kto);
	string getGroup(student kto);

	student& operator= (const student& src);
	friend std::ostream& operator<< (std::ostream& out, const student& kto);
	friend std::istream& operator>>(std::istream& in, student& kto);

private:
	string name = "name", familia = "familia";
	string nomerZach = "XXXXXXXX", group = "XXXX-00-00";
	int vozrast = 0;
};

