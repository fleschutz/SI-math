#pragma once

#include <iostream>

namespace si
{
	void print(std::string text)
	{
		std::cout << text << std::endl;
	}

	void print(si::time t, std::string description)
	{
		if (t >= si::hour(1))
			std::cout << "-> " << hour(t) << "h " << description << std::endl;
		else if (t >= si::minute(1))
			std::cout << "-> " << minute(t) << " min " << description << std::endl;
		else
			std::cout << "-> " << second(t) << " sec " << description << std::endl;
	}

	void print(si::length d, std::string description)
	{
		if (d >= si::kilometer(1))
			std::cout << "-> " << kilometer(d) << " km " << description << std::endl;
		else if (d >= si::meter(1))
			std::cout << "-> " << meter(d) << "m " << description << std::endl;
		else
			std::cout << "-> " << centimeter(d) << " cm " << description << std::endl;
	}

	void print(si::speed v, std::string description)
	{
		std::cout << "-> " << kilometers_per_hour(v) << " km/h " << description << std::endl;
	}

	void print(si::acceleration a, std::string description)
	{
	}

	void print(si::mass m, std::string description)
	{
	}

	void print(si::energy E, std::string description)
	{
		if (E >= si::gigajoule(1))
			std::cout << "-> " << megajoule(E) << " GJ " << description << std::endl;
		else if (E >= si::megajoule(1))
			std::cout << "-> " << megajoule(E) << " MJ " << description << std::endl;
		else if (E >= si::kilojoule(1))
			std::cout << "-> " << kilojoule(E) << " kJ " << description << std::endl;
		else
			std::cout << "-> " << joule(E) << " Joule " << description << std::endl;
	}

	void print(si::temperature T, std::string description)
	{
		std::cout << "-> " << celsius(T) << "°C " << description << std::endl;
	}

#if 0
	void print(kilogram_per_meter2 value, const char* description)
	{
		std::cout << "-> " << kilogram_per_meter2(value) << " BMI " << description << std::endl;
	}
#endif

	void print(si::byte number, std::string description)
	{
		std::cout << "-> " << number << " bytes " << description << std::endl;
	}
}
