// SI/print.h - print text, quantities, and SI values to the console
#pragma once

#include <iostream>
#include "to_string.h"

namespace SI
{
	void print(const std::string& text)
	{
		std::cout << std::endl << text.c_str();
	}

	void print(quantity number)
	{
		std::cout << number << " ";
	}

	void print(quantity value, const std::string& unit)
	{
		std::cout << value << unit.c_str() << " ";
	}

	// Internal print function.
	void _print(const std::string& text)
	{
		std::cout << text;
	}

	// The 7 SI Base Units
	// -------------------
	void print(length d)
	{
		_print(to_string(d));
	}

	void print(time t)
	{
		_print(to_string(t));
	}

	void print(mass m)
	{
		_print(to_string(m));
	}

	void print(temperature T)
	{
		if (T >= 250_K && T <= 470_K) // temperature range for humans
		{
			print(celsius(T), "°C");
			_print("/ ");
			print(fahrenheit(T), "°F");
		}
		else if (abs(T) >= 1_GK)
			print(T / 1_GK, "GK");
		else if (abs(T) >= 1_MK)
			print(T / 1_MK, "MK");
		else if (abs(T) >= 1_K)
			print(T / 1_K, "K");
		else if (abs(T) >= 1_mK)
			print(T / 1_mK, "mK");
		else if (abs(T) >= 1_μK)
			print(T / 1_μK, "μK");
		else 
			print(T / 1_nK, "nK");
	}

	void print(electric_current I)
	{
		_print(to_string(I));
	}

	// The 22 Derived SI Units
	// -----------------------
	void print(area a)
	{
		_print(to_string(a));
	}

	void print(volume v)
	{
		_print(to_string(v));
	}

	void print(velocity v)
	{
		_print(to_string(v));
	}

	void print(acceleration a)
	{
		_print(to_string(a));
	}

	void print(frequency f)
	{
		_print(to_string(f));
	}

	void print(force F)
	{
		_print(to_string(F));
	}

	void print(energy E)
	{
		if (abs(E) >= 1_PJ)
			print(E / 1_PJ, "PJ (petajoules)");
		else if (abs(E) >= 1_TJ)
			print(E / 1_TJ, "TJ (terajoules)");
		else if (abs(E) >= 1_GJ)
			print(E / 1_GJ, "GJ");
		else if (abs(E) >= 1_MJ)
			print(E / 1_MJ, "MJ");
		else if (abs(E) >= 1_kJ)
			print(E / 1_kJ, "kJ");
		else
			print(E / 1_J, "J");
	}

	void print_as_TNT_equivalent(energy E)
	{
		const auto one_kg_TNT = 4.184_MJ; // (explosion energy of 1kg Trinitrotoluol))
		auto TNT_mass = kilogram(E / one_kg_TNT);
		print(TNT_mass);
		_print("TNT ");
	}

	void print_as_Hiroshima_equivalent(energy E)
	{
		const auto Hiroshima_bomb = 62_TJ; // (explosion energy of the Hiroshima bomb)
		quantity factor = E / Hiroshima_bomb;
		print(factor);
		_print("Hiroshima bombs ");
	}

	void print(power P)
	{
		if (abs(P) >= 1_TWh)
			print(P / 1_TWh, "TWh");
		else if (abs(P) >= 1_GWh)
			print(P / 1_GWh, "GWh");
		else if (abs(P) >= 1_MWh)
			print(P / 1_MWh, "MWh");
		else if (abs(P) >= 1_kWh)
			print(P / 1_kWh, "kWh");
		else
			print(P / 1_Wh, "Wh");
	}

	void print(pressure p)
	{
		if (abs(p) >= 1_MPa)
			print(p / 1_MPa, "MPa");
		else if (abs(p) >= 1_kPa)
			print(p / 1_kPa, "kPa");
		else if (abs(p) >= 1_hPa)
			print(p / 1_hPa, "hPa");
		else
			print(p / 1_Pa, "Pa");
	}

	void print(electric_charge Q)
	{
		if (abs(Q) >= 1_Ah)
			print(Q / 1_Ah, "Ah");
		else
			print(Q / 1_mAh, "mAh");
	}

	void print(angle a)
	{
		print(a / 1_deg, "°");
	}

#if 0
	void print(pascal_ p)
	{
		print(p / 1_Pa, "Pa");
	}

	void print(watt_per_meter2 w)
	{
		print(w / 1_W_per_m², "W/m²");
	}
#endif

	void print(BMI v)
	{
		print(v / 1_kg_per_m², " BMI");
	}

	void print(area a, volume v, mass m)
	{
		print(a); print(v); print(m);
	}

	void print(area a, volume v, mass m, power p)
	{
		print(a); print(v); print(m); print(p);
	}

	void print(volume v, mass m, energy e)
	{
		print(v); print(m); print(e);
	}

	void print(mass m, energy e)
	{
		print(m); print(e);
	}
}
