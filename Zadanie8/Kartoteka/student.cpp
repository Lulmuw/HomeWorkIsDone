#include "student.h"

student::student(string new_name, string new_familia, int new_vozrast, string new_nomerZach, string new_group)
{
	name = new_name;
	familia = new_familia;
	vozrast = new_vozrast;
	nomerZach = new_nomerZach;
	group = new_group;
}

void student::setName(string new_name)
{
	name = new_name;
}

void student::setFamilia(string new_familia)
{
	familia = new_familia;
}

void student::setVozrast(int new_vozrast)
{
	vozrast = new_vozrast;
}

void student::setNomerZach(string new_nomerZach)
{
	nomerZach = new_nomerZach;
}

void student::setGroup(string new_group)
{
	group = new_group;
}

string student::getName(student kto)
{
	return name;
}

string student::getFamilia(student kto)
{
	return familia;
}

int student::getVozrast(student kto)
{
	return vozrast;
}

string student::getNomerZach(student kto)
{
	return nomerZach;
}

string student::getGroup(student kto)
{
	return group;
}

student& student::operator=(const student& kto)
{
	if (this != &kto) {
		
		name = kto.name;
		familia = kto.familia;
		vozrast = kto.vozrast;
		nomerZach = kto.nomerZach;
		group = kto.group;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const student& kto)
{
	out << kto.name << " " << kto.familia << " " << kto.vozrast << " " << kto.group << " " << kto.nomerZach;
	return out;
}

std::istream& operator>>(std::istream& in, student& kto)
{
	in >> kto.name;
	in >> kto.familia;
	in >> kto.vozrast;
	in >> kto.nomerZach;
	in >> kto.group;
	return in;
}
