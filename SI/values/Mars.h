// SI/values/Mars.h - type-safe values of planet Mars as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Mars // source: https://en.wikipedia.org/wiki/Mars
	{
#define VALUE(_name, _value, _unit)   const auto _name = _unit(_value)
VALUE( equatorial_radius,          3'396.2, kilometer);
VALUE( polar_radius,               3'376.2, kilometer);
VALUE( surface_area,            1.4437e8, kilometer2);
VALUE( volume,                1.63118e11, kilometer3);
VALUE( mass,                   6.4171e23, kilogram);
VALUE( surface_gravity,                3.72075, meters_per_second2);
VALUE( equatorial_rotation_velocity, 241, meters_per_second);
VALUE( satellites,                     2, quantity); // Phobos and Deimos
VALUE( human_population,               0, quantity); 
//...
#undef VALUE
	}
}

