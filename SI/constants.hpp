#pragma once

#include "base.hpp"

namespace si
{
	// Physical constants:
	inline static const auto gravity = meters_per_second2(9.80665); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.
									
	inline static const auto speed_of_light = meters_per_second(299792458); // speed of light in vacuum (c)


	// Mathematical constants:
	inline static const auto pi = degree(180);
	inline static const auto pi_2 = degree(90);
	inline static const auto tau = degree(360);
}	
