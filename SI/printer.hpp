// SI/printer.hpp - simple print interface
#pragma once

#include <iostream>

namespace si
{
	void print(std::string description)
	{
		std::cout << description;
	}

	void print(si::time t)
	{
		if (t >= si::hour(1))
			std::cout << " It's " << hour(t) << "h" << std::endl;
		else if (t >= si::minute(1))
			std::cout << " It's " << minute(t) << " min" << std::endl;
		else
			std::cout << " It's " << second(t) << " sec" << std::endl;
	}

	void print(si::length d)
	{
		if (d >= si::kilometer(1))
			std::cout << " It's " << kilometer(d) << " km" << std::endl;
		else if (d >= si::meter(1))
			std::cout << " It's " << meter(d) << "m" << std::endl;
		else
			std::cout << " It's " << centimeter(d) << " cm" << std::endl;
	}

	void print(si::speed v)
	{
		std::cout << " It's " << kilometers_per_hour(v) << " km/h" << std::endl;
	}

	void print(si::acceleration a)
	{
	}

	void print(si::mass m)
	{
	}

	void print(si::energy E)
	{
		if (E >= si::gigajoule(1))
			std::cout << " It's " << megajoule(E) << " GJ " << std::endl;
		else if (E >= si::megajoule(1))
			std::cout << " It's " << megajoule(E) << " MJ " << std::endl;
		else if (E >= si::kilojoule(1))
			std::cout << " It's " << kilojoule(E) << " kJ " << std::endl;
		else
			std::cout << " It's " << joule(E) << " Joule " << std::endl;
	}

	void print(si::temperature T)
	{
		std::cout << " It's " << celsius(T) << "°C " << std::endl;
	}

#if 0
	void print(kilogram_per_meter2 value)
	{
		std::cout << "-> " << kilogram_per_meter2(value) << " BMI " << std::endl;
	}
#endif

	void print(si::byte number)
	{
		std::cout << " It's " << number << " bytes " << std::endl;
	}
}
