// SI/units.h - type-safe SI units, e.g. SI::mass
#pragma once

#include <type_traits>
#include <limits>
#include <utility>
#include <cmath>
#include <algorithm>
#include <charconv>
#include "datatypes.h"

namespace SI
{
#define SI_UNIT(_name) inline constexpr auto _name

	// The 7 Base SI Units
	// -------------------
	// length in...
	SI_UNIT(meters)       = unit<length>();
	SI_UNIT(kilometers)   = kilo * meters; 
	SI_UNIT(centimeters)  = centi * meters;
	SI_UNIT(millimeters)  = milli * meters;
	SI_UNIT(per_meter)    = unit<per_length>();
	// time in...
	SI_UNIT(seconds)      = unit<time>();
	SI_UNIT(minutes)      = unit<time, 60>();
	SI_UNIT(hours)        = unit<time, 60*60>();
	// mass in...
	SI_UNIT(kilograms)    = unit<mass>();
	SI_UNIT(grams)        = milli * kilograms;
	// thermodynamic temperature in...
	SI_UNIT(kelvins)      = unit<temperature>();
	// electric current in...
	SI_UNIT(amperes)      = unit<electric_current>();
	// amount of substance in...
	SI_UNIT(moles)        = unit<amount_of_substance>();
	// luminous intensity in...
	SI_UNIT(candelas)     = unit<luminous_intensity>();

	// The Derived SI Units
	// --------------------
	SI_UNIT(hertz)        = unit<frequency>();

	SI_UNIT(meters2)      = unit<area>(); // (square meter)
	SI_UNIT(kilometers2)  = kilo * kilo * meters2;
	SI_UNIT(per_meter2)   = unit<per_area>();
	SI_UNIT(meter_kelvins)= meters * kelvins;

	SI_UNIT(meters2_per_second) = meters2 / seconds;
	SI_UNIT(kilograms_per_meter2) = kilograms / meters2;

	SI_UNIT(meters3)      = unit<volume>(); // (cubic meter)
	SI_UNIT(kilometers3)  = kilo * kilo * kilo * meters3;
	SI_UNIT(centimeters3) = centi * centi * centi * meters3;

	SI_UNIT(meters3_per_second) = meters3 / seconds;
	SI_UNIT(meters3_per_kilogram_per_second2) = meters3 / kilograms / (seconds * seconds);
	SI_UNIT(kilograms_per_meter3) = kilograms / meters3;
	SI_UNIT(grams_per_centimeter3) = grams / centimeters3;

	SI_UNIT(meters_per_second) = unit<velocity>();
	SI_UNIT(kilometers_per_hour) = kilometers / hours;
	SI_UNIT(millimeters_per_hour) = millimeters / hours;

	SI_UNIT(meters_per_second2) = unit<acceleration>();

	SI_UNIT(newtons)      = unit<force>();
	SI_UNIT(newtonmeters) = newtons * meters;
	SI_UNIT(newtonseconds) = newtons * seconds;

	SI_UNIT(joules)       = unit<energy>();
	SI_UNIT(jouleseconds) = joules * seconds;
	SI_UNIT(joules_per_second) =  joules / seconds;
	SI_UNIT(joules_per_kelvin) = joules / kelvins;
	SI_UNIT(joules_per_second_per_kilogram) = joules / seconds / kilograms;
	SI_UNIT(joules_per_kilogram_per_kelvin) = joules / kilograms / kelvins;
	SI_UNIT(joules_per_kelvin_per_mol) = joules / kelvins / moles;

	SI_UNIT(grays)        = joules / kilograms;
	SI_UNIT(sieverts)     = joules / kilograms;

	SI_UNIT(watts)        = unit<power>();
	SI_UNIT(wattmeters2)  = watts * meters2;
	SI_UNIT(watts_per_meter2) = watts / meters2;

	SI_UNIT(pascals)      = unit<pressure>();

	SI_UNIT(amperes_per_meter) = amperes / meters;
	SI_UNIT(amperes_per_meter2) = amperes / (meters * meters);
	SI_UNIT(ampere_hours) = amperes * hours;

	SI_UNIT(coulombs)     = unit<electric_charge>();
	SI_UNIT(coulombs_per_mol) = coulombs / moles;

	SI_UNIT(volts)        = unit<electric_potential>();
	SI_UNIT(farads)       = coulombs / volts;
	SI_UNIT(farads_per_meter) = farads / meters;
	SI_UNIT(ohms)         = volts / amperes;
	SI_UNIT(ohm_meters)   = ohms * meters;
	SI_UNIT(siemens)      = amperes / volts;
	SI_UNIT(siemens_per_meter) = siemens / meters;
	SI_UNIT(henrys)       = volts * seconds / amperes;
	SI_UNIT(webers)       = volts * seconds;
	SI_UNIT(teslas)       = kilograms / (amperes * seconds * seconds);
	SI_UNIT(joules_per_tesla) = joules / teslas;

	SI_UNIT(steradians)   = unit<detail::dimensionless>();

	SI_UNIT(lumens)       = candelas * steradians;
	SI_UNIT(lumenseconds) = lumens * seconds;
	SI_UNIT(lumens_per_watt) = lumens / watts;

	SI_UNIT(kilograms_per_mol) = kilograms / moles;
	SI_UNIT(mols_per_meter3) = moles / meters3;
	SI_UNIT(mols_per_kilogram) = moles / kilograms;
	SI_UNIT(mols_per_second) = moles / seconds;
	SI_UNIT(per_mol)      = unit<per_amount_of_substance>();

	// IMPERIAL UNITS
	SI_UNIT(pounds)       = unit<mass, 45359237, 100000000>();
	SI_UNIT(feet)         = unit<length, 3048, 10000>();
	SI_UNIT(nautical_miles) = unit<length, 1852, 100>();
	SI_UNIT(inches)       = unit<length, 254, 10000>();
	SI_UNIT(statute_miles)= unit<length, 1609344, 1000>();
	SI_UNIT(fahrenheit)   = detail::unit<detail::temperature_dimension, detail::tag_fahrenheit>();
	SI_UNIT(miles_per_hour) = statute_miles / hours;
	SI_UNIT(knots)        = nautical_miles / hours;

	// VARIOUS UNITS
	SI_UNIT(celsius)      = detail::unit<detail::temperature_dimension, detail::tag_celsius>();
	SI_UNIT(bytes)        = unit<detail::dimensionless>();
	SI_UNIT(bytes_per_second) = bytes / seconds;

	// ANGLE (DIMENSIONLESS)
	typedef long double angle;
	typedef angle radians;

	SI_INLINE angle sin(angle a)
	{
		return std::sin(radians(a));
	}

	SI_INLINE angle cos(angle a)
	{
		return std::cos(radians(a));
	}

	SI_INLINE angle tan(angle a)
	{
		return std::tan(radians(a));
	}

	SI_INLINE angle atan2(length y, length x)
	{
		return std::atan2(meters(y), meters(x));
	}

	// Raise any number to power of 2 (x² or x*x).
	template <typename T>
	[[nodiscard]] SI_INLINE_CONSTEXPR auto square(T x) { return x * x; }

	// Raise any number to power of 3 (x³ or x*x*x).
	template <typename T>
	[[nodiscard]] SI_INLINE_CONSTEXPR auto cube(T x) { return x * x * x; }

#undef SI_UNIT
}

#undef SI_DATATYPE
#undef SI_RETURN_QUANTITY
#undef SI_INLINE_CONSTEXPR
#undef SI_INLINE
