#pragma once
#include <iostream>

class property {
public:
	property(double dengi = 0) {	worth = dengi;	};
	virtual double nolog() = 0;
	virtual void chto() = 0;
	~property() = default;
protected:
	double worth;
};

class appartment:public property{
public:
	appartment(double dengi) :property(dengi) {};
	void chto() override { std::cout << "appartment"; }
	double nolog() override { return worth/1000; };
};

class car :public property {
public:
	car(double dengi) :property(dengi) {};
	void chto() override { std::cout << "car"; }
	double nolog() override { return worth / 200; };
};

class countryhouse :public property {
public:
	countryhouse(double dengi) :property(dengi) {};
	void chto() override { std::cout << "countryhouse"; }
	double nolog() override { return worth / 500; };
};