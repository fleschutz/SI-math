#pragma once

#include "types.hpp"

namespace si
{
	namespace Earth
	{
		const auto gravity = meters_per_second2(9.80665); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.

		const auto equatorial_radius = si::kilometer(6378.1370); // denoted 'a'
		const auto polar_radius = si::kilometer(6356.7523);      // denoted 'b'
		const auto radius = si::kilometer(6371);                 // (2*a+b) / 3
		const auto diameter = 2.0 * radius;

		const auto equatorial_circumference = si::kilometer(40075.0167); 
		const auto polar_circumference = si::kilometer(40007.8629173);

		const auto Great_Wall_length = kilometer(6430); // (approximately)
	}
}
