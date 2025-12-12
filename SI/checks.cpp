// SI/checks.cpp - Ensures that everything works as expected (aka 'unit tests').
#include <cassert>
#include "literals.hpp"
using namespace si;

void checks()
{
	// Let's check the length:
	assert(1_km == 1000_m);
	assert(1_m == 10_dm);
	assert(1_m == 100_cm);
	assert(1_m == 1000_mm);
	assert(1_m == 0.001_km);
	// assert(1_m == 3.28084_ft);
	assert(1_dm == 0.1_m);
	assert(1_cm == 0.01_m);
	assert(1_mm == 0.001_m);
	assert(1_NM == 1852_m);

	// Let's check the time:
	assert(1_min == 60_s);
	assert(1_h == 3600_s);

	// Let's check the speed:

	// Let's check the temperature:
	// assert(0_K == -273.15_degC);

	// Let's check the frequency:
	assert(1_GHz == 1000000000_Hz);
	assert(1_GHz == 1000_MHz);
	assert(1_GHz == 1000000_kHz);
	assert(1_MHz == 1000000_Hz);
	assert(1_MHz == 1000_kHz);
	assert(1_kHz == 1000_Hz);
}
