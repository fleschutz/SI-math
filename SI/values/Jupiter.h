// SI/values/Jupiter.h - type-safe values of planet Jupiter as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Jupiter // source: https://en.wikipedia.org/wiki/Jupiter
	{
#define VALUE(_name, _value, _unit)  const auto _name = _unit(_value)
VALUE( equatorial_radius,            71'492, kilometer);
VALUE( polar_radius,                 66'854, kilometer);
VALUE( mean_radius,                  69'911, kilometer);
VALUE( flattening,                        0.06487, quantity);
VALUE( surface_area,              6.1469e10, kilometer2);
VALUE( volume,                    1.4313e15, kilometer3);
VALUE( mass,                      1.8982e27, kilogram);
VALUE( surface_gravity,               24.79, meters_per_second2);
VALUE( equatorial_rotation_velocity, 12'600, meters_per_second);
VALUE( satellites,                       97, quantity);
VALUE( human_population,                  0, quantity);
//...
#undef CONST
	}
}

