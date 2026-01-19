// <datasets/Earth.h> - data of planet Earth as of 2025
#pragma once

#include <SI/literals.h>

namespace SI { namespace dataset {

typedef struct {
	const char* name;
	SI::volume volume;
	SI::mass mass;
	SI::density density;
	SI::acceleration surface_gravity;
	SI::length equatorial_circumference;
	dimensionless population;
} Earth_data;

//                             NAME      VOLUME            MASS           DENSITY         SURFACE GRAVITY   CIRCUMERENCE   POPULATION
const Earth_data Earth   = { "Earth",   1.0832e12_km³,    5.97370e24_kg, 5.515_g_per_cm³,9.80665_m_per_s², 40075.0167_km, 8.2e9, };

} } // SI::dataset

// Sources
// -------
// 1. https://en.wikipedia.org/wiki/List_of_gravitationally_rounded_objects_of_the_Solar_System
