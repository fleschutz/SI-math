// Literals for comfort, e.g. 12_km (requires C++11 or higher)
#pragma once

#include "types.hpp"

#define MAP(symbol_, unit_)	\
	constexpr auto operator "" _ ## symbol_(long double x) { return unit_(static_cast<double>(x)); }	\
	constexpr auto operator "" _ ## symbol_(unsigned long long x) { return unit_(static_cast<int>(x)); }

namespace si
{
	// Symbol:  Unit:                 Example: (sorted alphabetically)
	MAP( cm,    centimeter);          // 9_cm
	MAP( deg,   degree);              // 90_deg
	MAP( degC,  celsius);             // 0_degC
	MAP( degF,  fahrenheit);          // 32_degF
	MAP( ft,    feet);                // 10_ft
	MAP( GHz,   gigahertz);           // 18_GHz
	MAP( h,     hour);                // 24_h
	MAP( J,     joule);               // 1_J
	MAP( K,     kelvin);              // 273.15_K
	MAP( kg,    kilogram);            // 10_kg
	MAP( kHz,   kilohertz);           // 700_kHz
	MAP( km,    kilometer);	          // 1.2_km
	MAP( kmh,   kilometers_per_hour); // 100_kmh
	MAP( kn,    knots);               // 60_kn
	MAP( m,     meter);               // 1_m
	MAP( Mach,  Mach);                // 6_Mach
	MAP( min,   minute);              // 60_min
	MAP( MHz,   megahertz);           // 128_MHz
	MAP( mm,    millimeter);          // 10_mm
	MAP( mph,   miles_per_hour);      // 50_mph
	MAP( mps,   meters_per_second);   // 10_mps
	MAP( mps2,  meters_per_second2);  // 9.807_mps2
	MAP( NM,    nautical_mile);       // 1_NM
	MAP( s,     second);              // 60_s
	MAP( sec,   second);              // 60_sec
	MAP( N,     newton);              // 5.0_N
	MAP( Nm,    newtonmeter);         // 2.1_Nm
}

#undef LIT
