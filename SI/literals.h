// SI/literals.h - type-safe literals, e.g. 12_km (requires C++11 or higher)
#pragma once

#include "units.h"

namespace si
{
#define LITERAL(_symbol, _factor, _baseUnit) \
  constexpr auto operator "" _ ## _symbol(long double x) { return _baseUnit(static_cast<double>(x) * static_cast<double>(_factor)); } \
  constexpr auto operator "" _ ## _symbol(unsigned long long x) { return _baseUnit(static_cast<double>(x) * _factor); }
#define CARDINAL(_symbol, _factor, _baseUnit) \
  constexpr auto operator "" _ ## _symbol(unsigned long long x) { return _baseUnit(static_cast<long long>(x) * _factor); }

// THE 7 SI BASE UNITS:
// Symbol:   Factor:  Base Unit:            Example:
LITERAL( km,     1e3, meter);               // 7_km (kilometer)
LITERAL( m,        1, meter);               // 1_m
LITERAL( meter,    1, meter);               // 2_meter
LITERAL( dm,    1e-1, meter);               // 3_dm (decimeter)
LITERAL( cm,    1e-2, meter);               // 4_cm (centimeter)
LITERAL( mm,    1e-3, meter);               // 5_mm (millimeter)
LITERAL( μm,    1e-6, meter);               // 6_μm (micrometer)

LITERAL( s,        1, second);              // 60_s
LITERAL( sec,      1, second);              // 60_sec
LITERAL( second,   1, second);              // 60_second
LITERAL( ms,    1e-3, second);              // 1_ms (millisecond)
LITERAL( mus,   1e-6, second);              // 2_mus (microsecond)
LITERAL( min,     60, second);              // 5_min
LITERAL( h,     3600, second);              // 24_h
LITERAL( day,24*3600,second);               // 1_day on Earth!
LITERAL( week,  7*24*3600,second);          // 1_week on Earth!
LITERAL( year,  365.25*24*3600,second);     // 1_year on Earth!

LITERAL( mt,     1e9, kilogram);            // 1_mt (megaton)
LITERAL( kt,     1e6, kilogram);            // 1_kt (kiloton)
LITERAL( t,      1e3, kilogram);            // 1_t (metric ton)
LITERAL( kg,       1, kilogram);            // 1_kg
LITERAL( g,     1e-3, kilogram);            // 1_g (gram)
LITERAL( mg,    1e-6, kilogram);            // 1_mg (milligram)
LITERAL( mug,   1e-9, kilogram);            // 1_mug (microgram)

LITERAL( GK,     1e9, kelvin);              // 1_GK (gigakelvin)
LITERAL( MK,     1e6, kelvin);              // 1_MK (megakelvin)
LITERAL( kK,     1e3, kelvin);              // 1_kK (kilokelvin)
LITERAL( K,        1, kelvin);              // 1_K
LITERAL( mK,    1e-3, kelvin);              // 1_mK (millikelvin)
LITERAL( muK,   1e-6, kelvin);              // 1_muK (microkelvin)
LITERAL( nK,    1e-9, kelvin);              // 1_nK (nanokelvin)

LITERAL( MA,     1e6, ampere);              // 1_MA (megaampere)
LITERAL( kA,     1e3, ampere);              // 1_kA (kiloampere)
LITERAL( A,        1, ampere);              // 1_A 
LITERAL( mA,    1e-3, ampere);              // 1_mA (milliampere)
LITERAL( muA,   1e-6, ampere);              // 1_muA (microampere)
LITERAL( nA,    1e-9, ampere);              // 1_nA (nanoampere)
LITERAL( pA,   1e-12, ampere);              // 1_pA (picoampere)

// THE 22 SI DERIVED UNITS
//     Symbol: Factor: Base Unit:           Example:
LITERAL( Bq,       1, hertz);               // 100_Bq (Bequerel)
LITERAL( deg,      1, degree);              // 90_deg
LITERAL( kBq,   1000, hertz);               // 2_kBq
LITERAL( kmh,      1, kilometers_per_hour); // 30_kmh
LITERAL( mps,      1, meters_per_second);   // 10_mps
LITERAL( mps2,     1, meters_per_second2);  // 9.807_mps2
LITERAL( Nm,       1, newtonmeter);         // 2.1_Nm
LITERAL( ha,   10000, meter2);              // 3_ha

LITERAL( km2,      1, kilometer2);	    // 1_km2
LITERAL( m2,       1, meter2);              // 1_m2
LITERAL( cm2,      1, centimeter2);         // 1_cm2
LITERAL( mm2,      1, millimeter2);         // 1_mm2

LITERAL( km3,      1, kilometer3);	    // 1_km3
LITERAL( m3,       1, meter3);              // 1_m3
LITERAL( cm3,      1, centimeter3);         // 1_cm3
LITERAL( mm3,      1, millimeter3);         // 1_mm3

LITERAL( kg_per_m³,  1, kilograms_per_meter3);// 1_kg_per_m3
LITERAL( t_per_m³, 1e3, kilograms_per_meter3);// 1_t_per_m3

LITERAL( Hz,       1, hertz);               // 1_Hz
LITERAL( kHz,    1e3, hertz);               // 2_kHz
LITERAL( MHz,    1e6, hertz);               // 3_MHz
LITERAL( GHz,    1e9, hertz);               // 4_GHz
LITERAL( THz,   1e12, hertz);               // 5_THz

LITERAL( V,        1, volt);                // 1_V 
LITERAL( kV,     1e3, volt);                // 2_kV (kilovolt)
LITERAL( MV,     1e6, volt);                // 3_MV (megavolt)
LITERAL( mV,    1e-3, volt);                // 4_mV (millivolt)
LITERAL( muV,   1e-6, volt);                // 5_muV (microvolt)
LITERAL( nV,    1e-9, volt);                // 6_nV (nanovolt)
LITERAL( pV,   1e-12, volt);                // 7_pV (picovolt)

LITERAL( Ohm,      1, ohm);                // 1_Ohm
LITERAL( kOhm,   1e3, ohm);                // 1_kOhm (kiloohm)
LITERAL( MOhm,   1e6, ohm);                // 1_MOhm (megaohm)
LITERAL( mOhm,  1e-3, ohm);                // 1_mOhm (milliohm)

LITERAL( MN,     1e6, newton);             // 1_MN (meganewton)
LITERAL( kN,     1e3, newton);             // 1_kN (kilonewton)
LITERAL( N,        1, newton);             // 1_N

LITERAL( TJ,    1e12, joule);              // 1_TJ (terajoule)
LITERAL( GJ,     1e9, joule);              // 1_GW (gigajoule)
LITERAL( MJ,     1e6, joule);              // 1_MW (megajoule)
LITERAL( kJ,     1e3, joule);              // 1_kW (kilojoule)
LITERAL( J,        1, joule);              // 1_J (joule)

LITERAL( TWh, 3.6e15, joules_per_second);  // 1_TWh (terawatt-hour)
LITERAL( GWh, 3.6e12, joules_per_second);  // 1_GWh (gigawatt-hour)
LITERAL( MWh,  3.6e9, joules_per_second);  // 1_MWh (megawatt-hour)
LITERAL( kWh,  3.6e6, joules_per_second);  // 1_kWh (kilowatt-hour)
LITERAL( Wh,   3.6e3, joules_per_second);  // 1_Wh (watt-hour)

LITERAL( kWh_per_kg, 3.6e6, joules_per_second_per_kilogram);  // 1_kWh_per_kg (kilowatt-hour per kilogram)
LITERAL( Wh_per_kg,  3.6e3, joules_per_second_per_kilogram);  // 1_Wh_per_kg (watt-hour per kilogram)

LITERAL( TW,    1e12, joules_per_second);  // 1_TW (terawatt)
LITERAL( GW,     1e9, joules_per_second);  // 1_GW (gigawatt)
LITERAL( MW,     1e6, joules_per_second);  // 1_MW (megawatt)
LITERAL( kW,     1e3, joules_per_second);  // 1_kW (kilowatt)
LITERAL( W,        1, joules_per_second);  // 1_W (Watt)
LITERAL( mW,    1e-3, joules_per_second);  // 1_mW (milliwatt)
LITERAL( muW,   1e-6, joules_per_second);  // 1_muW (microwatt)

// IMPERIAL UNITS
//     Symbol: Factor: Base Unit:            Example:
LITERAL( degF,  1,     fahrenheit);          // 32_degF (°Fahrenheit)
LITERAL( ft,    .3048, meter);               // 5_ft
LITERAL( in,    0.0254,meter);               // 9_in
LITERAL( kn,    1'852.0, kilometers_per_hour); // 60_kn
LITERAL( lb,    453.592'37, gram);           // 6_lb
LITERAL( oz,    28.349'523'125, gram);       // 13_oz
LITERAL( mi,    1'609.344, meter);           // 8_mi
LITERAL( mph,   .44704,meters_per_second);   // 50_mph
LITERAL( NM,    1852,  meter);               // 1_NM (nautical mile)
LITERAL( nmi,   1852,  meter);               // 1_nmi (nautical mile)
LITERAL( yd,    .9144, meter);               // 3_yd (yard)

// VARIOUS UNITS
//     Symbol: Factor: Base Unit:            Example:
LITERAL( degC,    1,   celsius);             // 0_degC (°Celsius)
LITERAL( degR, 5.0/9.0,   kelvin);              // 1_degR (°Rankine)
LITERAL( Mach,  330,   meters_per_second);   // 2_Mach
LITERAL( AU, 149'597'870'700, meter);        // 3_AU (astronomical unit)
LITERAL( pc,3.085'677'581'28e16, meter);     // 4_pc (parsec)

CARDINAL( byte,    1, byte);                // 1_byte
CARDINAL( kB,    1e3, byte);                // 1_kB (kilobyte)
CARDINAL( MB,    1e6, byte);                // 2_MB (megabyte)
CARDINAL( GB,    1e9, byte);                // 3_GB (gigabyte)
CARDINAL( TB,   1e12, byte);                // 4_TB (terabyte)
CARDINAL( PB,   1e15, byte);                // 5_PB (terabyte)
CARDINAL( EB,   1e18, byte);                // 6_EB (exabyte)
CARDINAL( ZB,   1e21, byte);                // 7_ZB (zettabyte)
CARDINAL( YB,   1e24, byte);                // 8_ZY (yottabyte)
CARDINAL( RB,   1e27, byte);                // 9_RY (ronnabyte)
CARDINAL( QB,   1e30, byte);                //10_QY (quettabyte)

LITERAL( KBps,   1e3, bytes_per_second);    // 1_KBps (kilobyte/sec)
LITERAL( MBps,   1e6, bytes_per_second);    // 1_MBps (megabyte/sec)
LITERAL( GBps,   1e9, bytes_per_second);    // 1_GBps (gigabyte/sec)
LITERAL( TBps,  1e12, bytes_per_second);    // 1_TBps (terabyte/sec)

LITERAL( Kbps, 1e3/8, bytes_per_second);    // 1_Kbps (kilobit/sec)
LITERAL( Mbps, 1e6/8, bytes_per_second);    // 1_Mbps (megabit/sec)
LITERAL( Gbps, 1e9/8, bytes_per_second);    // 1_Gbps (gigabit/sec)
LITERAL( Tbps,1e12/8, bytes_per_second);    // 1_Tbps (terabit/sec)

#undef LITERAL
}
