#pragma once

#include "base.hpp"

namespace si
{
	// Physical constants:
	const auto gravity_of_Earth = meters_per_second2(9.80665); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.
	const auto gravity_of_Mars = meters_per_second2(3.728);
	const auto gravity_of_Mercury = meters_per_second2(3.7); // surface gravity
	const auto gravity_of_Moon = meters_per_second2(1.628);
									
	const auto speed_of_light = meters_per_second(299792458); // speed of light in vacuum (c)

	const auto speed_of_sound = meters_per_second(343); // speed of sound in air at 20 °C (68 °F)

	// Mathematical constants:
	const auto pi = degree(180);
	const auto half_pi = degree(90);
	const auto tau = degree(360);
}	
