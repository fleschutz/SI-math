// SI/values/Sun.h - type-safe values of the Sun as of 2025
#pragma once

#include "../../SI/units.h"

namespace si
{
	namespace Sun
	{
#define VALUE(_name, _value, _unit) const auto _name = _unit(_value)
VALUE( equatorial_radius,        695'700'000, meter);
VALUE( equatorial_rotation_velocity,    1997, meters_per_second);
VALUE( equatorial_surface_gravity,       274, meters_per_second2);
VALUE( surface_area,                 6.09e12, meter2);
VALUE( diameter,               1'390'176'000, meter);
VALUE( radius,                  diameter / 2, meter);
VALUE( mass,                       1.9884e33, kilogram);
VALUE( mean_distance_from_Earh,     1.496e11, meter);
VALUE( flattening,                   0.00005, quantity);
//VALUE(average_density,               1.408, g/cm³);
VALUE( age,                            4.6e9, year);
VALUE( center_temperature,        15'700'000, kelvin);
VALUE( photosphere_temperature,        5'772, kelvin);
VALUE( corona_temperature,         5'000'000, kelvin);
VALUE( human_population,                   0, quantity); 
//...
#undef VALUE
	}
}

