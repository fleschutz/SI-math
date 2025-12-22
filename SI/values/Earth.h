// SI/values/Earth.h - type-safe values of planet Earth as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Earth // source: https://en.wikipedia.org/wiki/Earth
	{
#define VALUE(_name, _value, _unit)  const auto _name = _unit(_value)
VALUE( surface_gravity,             9.80665, meters_per_second2); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.
VALUE( equatorial_radius,          6378.137, kilometer);      // denoted 'a'
VALUE( equatorial_diameter, equatorial_radius * 2, meter);
VALUE( equatorial_circumference, 40075.0167, kilometer); 
VALUE( polar_radius,               6356.752, kilometer);      // denoted 'b'
VALUE( polar_diameter,     polar_radius * 2, meter);
VALUE( polar_circumference,   40007.8629173, kilometer);
VALUE( mean_radius,                    6371, kilometer);      // (2*a+b) / 3
VALUE( mean_diameter,       mean_radius * 2, meter);
VALUE( surface_area,            510'072'000, kilometer2);
VALUE( land_area,               148'940'000, kilometer2);
VALUE( water_area,              361'132'000, kilometer2);
VALUE( volume,                   1.08321e12, kilometer3);
VALUE( mass,                      5.9723e24, kilogram);
VALUE( equatorial_rotation_velocity, 1674.4, kilometers_per_hour);
VALUE( age,                          4.5e12, year);
VALUE( satellites,                        1, quantity); // see Moon.h
VALUE( human_population,              8.2e9, quantity); 

// Mountains:  (source: https://en.wikipedia.org/wiki/List_of_highest_mountains_on_Earth, heights above MSL, sorted by height)
VALUE( Mount_Everest_height,           8849, meter);
VALUE( K2_height,                      8611, meter);
VALUE( Kangchenjunga_height,           8586, meter);
VALUE( Lhotse_height,                  8516, meter);
VALUE( Makalu_height,                  8485, meter);
VALUE( Cho_Oyu_height,                 8188, meter);
VALUE( Dhaulagiri_1_height,            8167, meter);
VALUE( Manaslu_height,                 8163, meter);
VALUE( Nanga_Parbat_height,            8126, meter);
VALUE( Annapurna_1_height,             8091, meter);
VALUE( Gasherbrum_1_height,            8080, meter);
VALUE( Broad_Peak_height,              8051, meter);
VALUE( Gasherbrum_2_height,            8035, meter);
VALUE( Shishapangma_height,            8027, meter);
VALUE( Gyachung_Kang_height,           7952, meter);
VALUE( Gasherbrum_3_height,            7946, meter);
VALUE( Annapurna_2_height,             7937, meter);
VALUE( Zugspitze_height,               2962, meter);
// ...

// Buildings: (source: https://en.wikipedia.org/wiki/List_of_tallest_buildings, sorted by height)
VALUE( Burj_Khalifa_height,             828, meter);
VALUE( Merdeka_height,                  678.9, meter);
VALUE( Shangai_Tower_height,            632, meter);
VALUE( The_Clock_Towers_height,         601, meter);
VALUE( Ping_An_Tower_height,            599.1, meter);
VALUE( Lotte_World_Tower_height,        554.5, meter);
VALUE( One_World_Trade_Center_height,   541.3, meter);
VALUE( Guangzhou_CTF_height,            530, meter);
VALUE( Tianjin_CTF_height,              530, meter);
VALUE( China_Zun_height,                527.7, meter);
VALUE( Taipei_101_height,               508, meter);
VALUE( Eiffel_Tower_height,             330, meter);
// ...

// Walls:
VALUE( Great_Wall_in_China_length,     6430, kilometer); // (approximately)
// ...

#undef VALUE
	}
}

