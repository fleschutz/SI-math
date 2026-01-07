// SI/print.h - simple print to the console functions (single and multiple values, and equivalents).
#pragma once

#include <iostream>
#include "to_string.h"

namespace SI
{
	// internal print function
	void _print(const std::string& text)
	{
		std::cout << text;
	}

	// print a single arbitrary value
	template <typename T>
	void print(T x)
	{
		_print(to_string(x));
	}

	// print two arbitrary values
	template <typename T1, typename T2>
	void print(T1 val1, T2 val2)
	{
		_print(to_string(val1)); _print(", "); _print(to_string(val2));
	}

	// print three arbitrary values
	template <typename T1, typename T2, typename T3>
	void print(T1 val1, T2 val2, T3 val3)
	{
		_print(to_string(val1)); _print(", "); _print(to_string(val2)); _print(", "); _print(to_string(val3));
	}

	// print four arbitrary values
	template <typename T1, typename T2, typename T3, typename T4>
	void print(T1 val1, T2 val2, T3 val3, T4 val4)
	{
		_print(to_string(val1)); _print(", "); _print(to_string(val2)); _print(", "); _print(to_string(val3)); _print(", "); _print(to_string(val4));
	}

	// print equivalent information
	void print_equivalent(energy E)
	{
		const auto one_kg_TNT = 4.184_MJ; // (explosion energy of 1kg Trinitrotoluol))
		const auto Hiroshima_bomb = 62_TJ; // (explosion energy of the Hiroshima bomb)
		mass TNT = kilogram(E / one_kg_TNT);
		dimensionless factor = E / Hiroshima_bomb;

		_print(" (=");
		print(TNT);
		_print(" TNT, ");
		print(factor);
		_print(" Hiroshima bombs)");
	}

	void print_equivalent(power_intensity I)
	{
		dimensionless decibel = 10.0 * std::log10((I / 1_W_per_m²) / 1e-12);
		_print(" (=");
		print(decibel);
		_print("dB)");
	}
}
