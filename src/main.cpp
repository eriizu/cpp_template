#include <iomanip>
#include <iostream>
#include <unistd.h>
#include "Greeter.hpp"

void temp_convert(std::istream &is, std::ostream &os)
{
	float	    temp;
	std::string unit;
	std::string target;

	is >> temp;
	is >> unit;

	os << "temp: " << temp << " unit: " << unit << std::endl;

	float temp_f;
	float temp_c;
	float temp_k;

	if (unit == "F") {
		temp_f = temp;
		temp_c = (temp - 32) / 1.8;
		temp_k = temp_c + 273.15;
	} else if (unit == "C") {
		temp_c = temp;
		temp_f = temp * 1.8 + 32;
		temp_k = temp + 273.15;
	} else if (unit == "K") {
		temp_k = temp;
		temp_c = temp - 273.15;
		temp_f = temp_c * 1.8 + 32;
	}
	os << std::setprecision(4) << temp_c << " C" << std::endl;
	os << std::setprecision(4) << temp_f << " F" << std::endl;
	os << std::setprecision(4) << temp_k << " K" << std::endl;
}

int main(void)
{
	Greeter bjr("toto");
	temp_convert(std::cin, std::cout);
	float tmp;

	// while (std::cin) {
	// 	std::cin >> tmp;
	// 	// std::cin >> tmp;
	// 	std::cout << tmp << std::endl;
	// 	// close(0);
	// }
}
