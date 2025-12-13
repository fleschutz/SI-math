// prefixes.hpp - contains the 24 SI prefixes as of 2022.
#pragma once

namespace si
{
	namespace prefix // details: https://en.wikipedia.org/wiki/Metric_prefix
	{
		typedef long double Quantity; // big enough

		                                 // Symbol
		const Quantity quetta = 10e30;   // Q
		const Quantity ronna  = 10e27;   // R
		const Quantity yotta  = 10e24;   // Y
		const Quantity zetta  = 10e21;   // Z
		const Quantity exa    = 10e18;   // E
		const Quantity peta   = 10e15;   // P
		const Quantity tera   = 10e12;   // T
		const Quantity giga   = 10e9;    // G
		const Quantity mega   = 10e6;    // k
		const Quantity kilo   = 10e3;    // k
		const Quantity hecto  = 10e2;    // h
		const Quantity deca   = 10e1;    // da

		const Quantity deci   = 10e-1;   // d
		const Quantity centi  = 10e-2;   // c
		const Quantity milli  = 10e-3;   // m
		const Quantity micro  = 10e-6;   // μ
		const Quantity nano   = 10e-9;   // n
		const Quantity pico   = 10e-12;  // p
		const Quantity femto  = 10e-15;  // f
		const Quantity atto   = 10e-18;  // a
		const Quantity zepto  = 10e-21;  // z
		const Quantity yocto  = 10e-24;  // y
		const Quantity ronto  = 10e-27;  // r
		const Quantity quecto = 10e-30;  // q
	}
}	
