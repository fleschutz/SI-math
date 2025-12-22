// SI/values/Moon.h - type-safe values of the Moon as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Moon // source: https://en.wikipedia.org/wiki/Moon
	{
#define VALUE(_name, _value, _unit) const auto _name = _unit(_value)
VALUE( equatorial_radius,              1'738.1, kilometer);
VALUE( polar_radius,                   1'736.0, kilometer);
VALUE( mean_radius,                    1'737.4, kilometer);
VALUE( mean_diameter,          mean_radius * 2, meter);
VALUE( flattening,                      0.0012, quantity);
VALUE( equatorial_circumference,        10'921, kilometer);
VALUE( surface_area,                   3.793e7, kilometer2);
VALUE( volume,                       2.1958e10, kilometer3);
VALUE( mass,                          7.346e22, kilogram);
VALUE( surface_gravity,                  1.622, meters_per_second2);
VALUE( equatorial_rotation_velocity,     4.627, meters_per_second);
VALUE( human_population,                     0, quantity);
//...
#undef VALUE
	}
}

