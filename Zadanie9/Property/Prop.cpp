//main.cpp

#include <iostream>
#include "property.h"
#include <vector>

int main()
{
	property* propArr[7];
	propArr[0] = new appartment(1000);
	propArr[1] = new appartment(10000);
	propArr[2] = new appartment(100000);
	propArr[3] = new car(2000);
	propArr[4] = new car(4000);
	propArr[5] = new countryhouse(5000);
	propArr[6] = new countryhouse(1000);
	
	for (int i = 0; i < 7; i++) {
		std::cout << i << ") ";
		(*propArr[i]).chto();
		std::cout << " nolog = " << (*propArr[i]).nolog() << std::endl;
		delete propArr[i];
	}
}
