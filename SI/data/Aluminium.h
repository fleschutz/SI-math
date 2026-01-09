// SI/data/Aluminium.h - data of material Aluminium as of 2025
#pragma once

#include "../../SI/units.h"
#define SET(_name, _value, _unit) const auto _name = _unit(_value ## L)

namespace SI { namespace Aluminium {

SET( atomic_number,              13, dimensionless);
SET( molar_mass,             26.982, grams_per_mol);
SET( density,                  2700, kilograms_per_meter3);
SET( melting_point,          660.32, degC);
SET( boiling_point,            2470, degC);
SET( thermal_conductivity,      237, watts_per_meter_kelvin); // at 27°C

} } // SI::Aluminium
#undef SET

// Sources
// -------
// 1. https://matmake.com/materials-data/aluminum-properties.html
