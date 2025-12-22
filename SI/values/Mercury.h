// SI/values/Mercury.h - type-safe values of planet Mercury as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Mercury // source: https://en.wikipedia.org/wiki/Mercury_(planet)
	{
#define VALUE(_name, _value, _unit) const auto _name = _unit(_value)
VALUE( mean_radius,                2'439.7, kilometer);
VALUE( flattening,                  0.0009, quantity);
VALUE( surface_area,                7.48e7, kilometer2);
VALUE( volume,                    6.083e10, kilometer3);
VALUE( mass,                     3.3011e23, kilogram);
VALUE( surface_gravity,                3.7, meters_per_second2);
VALUE( equatorial_rotation_velocity, 3.026, meters_per_second);
VALUE( satellites,                       0, quantity);
VALUE( human_population,                 0, quantity);
//...
#undef VALUE
	}
}

