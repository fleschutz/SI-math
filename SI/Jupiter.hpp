// SI/Jupiter.hpp - contains data of planet Jupiter
#pragma once
#include "types.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Jupiter // source: https://en.wikipedia.org/wiki/Jupiter
	{
CONST( equatorial_radius,            71'492, kilometer);
CONST( polar_radius,                 66'854, kilometer);
CONST( mean_radius,                  69'911, kilometer);
CONST( flattening,                        0.06487, quantity);
CONST( surface_area,              6.1469e10, kilometer2);
CONST( volume,                    1.4313e15, kilometer3);
CONST( mass,                      1.8982e27, kilogram);
CONST( surface_gravity,               24.79, meters_per_second2);
CONST( equatorial_rotation_velocity, 12'600, meters_per_second);
CONST( satellites,                       97, quantity); // (as of 2025)
CONST( human_population,                  0, quantity); // (as of 2025)
	}
}

#undef CONST
