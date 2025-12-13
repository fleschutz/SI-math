// SI/Earth.hpp - contains physical characteristics of planet Earth
#pragma once

#include "types.hpp"

namespace si
{
	namespace Earth
	{
		const auto gravity = meters_per_second2(9.80665); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.

		const auto equatorial_radius = si::kilometer(6378.1370); // denoted 'a'
		const auto equatorial_diameter = 2.0 * equatorial_radius;
		const auto equatorial_circumference = si::kilometer(40075.0167); 

		const auto polar_radius = si::kilometer(6356.7523);      // denoted 'b'
		const auto polar_diameter = 2.0 * polar_radius;
		const auto polar_circumference = si::kilometer(40007.8629173);

		const auto radius = si::kilometer(6371);                 // (2*a+b) / 3
		const auto diameter = 2.0 * radius;

		const auto mass = si::kilogram(5.9723e24);

		const auto Great_Wall_length = kilometer(6430); // (approximately)

		// source: https://en.wikipedia.org/wiki/List_of_highest_mountains_on_Earth (heights above MSL, sorted by height)
		const auto Mount_Everest_height = meter(8849);
		const auto K2_height            = meter(8611);
		const auto Kangchenjunga_height = meter(8586);
		const auto Lhotse_height        = meter(8516);
		const auto Makalu_height        = meter(8485);
		const auto Cho_Oyu_height       = meter(8188);
		const auto Dhaulagiri_1_height  = meter(8167);
		const auto Manaslu_height       = meter(8163);
		const auto Nanga_Parbat_height  = meter(8126);
		const auto Annapurna_1_height   = meter(8091);
		const auto Gasherbrum_1_height  = meter(8080);
		const auto Broad_Peak_height    = meter(8051);
		const auto Gasherbrum_2_height  = meter(8035);
		const auto Shishapangma_height  = meter(8027);
		const auto Gyachung_Kang_height = meter(7952);
		const auto Gasherbrum_3_height  = meter(7946);
		const auto Annapurna_2_height   = meter(7937);
		// ...
		const auto Zugspitze_height     = meter(2962);
	}
}
