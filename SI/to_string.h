// SI/to_string.h - converts SI units to a string 
#pragma once

#include <string>
#include "literals.h"
#include "values/Earth.h"

namespace SI
{
	// Internal function to join both quantity and unit.
	std::string _join(long double quantity, const std::string& unit)
	{
		return std::to_string(quantity) + unit;
	}

	// The 7 SI Base Units
	// -------------------
	std::string to_string(length d)
	{
		if (abs(d) >= 1_Mly)
			return _join(d / 1_Mly, "Mly (megalight-years)");
		else if (abs(d) >= 1_pc)
			return _join(d / 1_pc, "pc (parsec)");
		else if (abs(d) >= 1_ly)
			return _join(d / 1_ly, "ly (light-years)");
		else if (abs(d) >= 1_au)
			return _join(d / 1_au, "au (astronomical unit)");
		else if (abs(d) >= 1_km)
			return _join(d / 1_km, "km");
		else if (abs(d) >= 1_m)
			return _join(d / 1_m, "m ");
		else if (abs(d) >= 1_cm)
			return _join(d / 1_cm, "cm");
		else if (abs(d) >= 1_mm)
			return _join(d / 1_mm, "mm");
		else
			return _join(d / 1_μm, "μm");
	}

	std::string to_string(time t)
	{
		if (abs(t) >= Earth::year)
			return _join(t / Earth::year, " year(s)");
		else if (abs(t) >= Earth::week)
			return _join(t / Earth::week, " week(s)");
		else if (abs(t) > Earth::day)
			return _join(t / Earth::day, " day(s)");
		else if (abs(t) >= 1_h)
			return _join((int)(t / 1_h), "h ") + _join((int)(t / 1_min) % 60, "min");
		else if (abs(t) >= 1_min)
			return _join((int)(t / 1_min), "min ") + _join((int)(t / 1_sec) % 60, "sec");
		else if (abs(t) >= 1_sec)
			return _join(t / 1_sec, "sec");
		else if (abs(t) >= 1_ms)
			return _join(t / 1_ms, "ms");
		else if (abs(t) >= 1_μs)
			return _join(t / 1_μs, "μs");
		else
			return _join(t / 1_ns, "ns");
	}

	std::string to_string(mass m)
	{
		if (abs(m) >= 1_Gt)
			return _join(m / 1_Gt, "Gt (gigatons)");
		else if (abs(m) >= 1_Mt)
			return _join(m / 1_Mt, "Mt (megatons)");
		else if (abs(m) >= 1_kt)
			return _join(m / 1_kt, "kt (kilotons)");
		else if (abs(m) >= 1_t)
			return _join(m / 1_t, "t");
		else if (abs(m) >= 1_kg)
			return _join(m / 1_kg, "kg");
		else if (abs(m) >= 1_g)
			return _join(m / 1_g, "g");
		else if (abs(m) >= 1_mg)
			return _join(m / 1_mg, "mg");
		else
			return _join(m / 1_μg, "μg");
	}

	std::string to_string(electric_current I)
	{
		if (abs(I) >= 1_A)
			return _join(I / 1_A, "A");
		else if (abs(I) >= 1_mA)
			return _join(I / 1_mA, "mA");
		else if (abs(I) >= 1_μA)
			return _join(I / 1_μA, "μA");
		else if (abs(I) >= 1_nA)
			return _join(I / 1_nA, "nA");
		else
			return _join(I / 1_pA, "pA");
	}

	// The 22 Derived SI Units
	// -----------------------
	std::string to_string(area a)
	{
		if (abs(a) >= 1_km²)
			return _join(a / 1_km², "km²");
		else if (abs(a) >= 1_hm²)
			return _join(a / 1_hm², "hm²");
		else if (abs(a) >= 1_m²)
			return _join(a / 1_m², "m²");
		else if (abs(a) >= 1_cm²)
			return _join(a / 1_cm², "cm²");
		else if (abs(a) >= 1_mm²)
			return _join(a / 1_mm², "mm²");
		else
			return _join(a / 1_μm², "μm²");
	}

	std::string to_string(volume v)
	{
		if (abs(v) >= 1_km³)
			return _join(v / 1_km³, "km³");
		else if (abs(v) >= 1_m³)
			return _join(v / 1_m³, "m³");
		else if (abs(v) >= 1_l)
			return _join(v / 1_l, "l");
		else if (abs(v) >= 1_cm³)
			return _join(v / 1_cm³, "cm³");
		else if (abs(v) >= 1_mm³)
			return _join(v / 1_mm³, "mm³");
		else
			return _join(v / 1_μm³, "μm³");
	}

	std::string to_string(velocity v)
	{
		if (abs(v) >= 1_km_per_h)
			return _join(v / 1_km_per_h, "km/h");
		else if (abs(v) >= 1_m_per_s)
			return _join(v / 1_m_per_s, "m/s");
		else
			return _join(v / 1_mm_per_h, "mm/h");
	}

	std::string to_string(acceleration a)
	{
		return _join(a / 1_m_per_s², "m/s²");
	}

	std::string to_string(frequency f)
	{
		if (abs(f) >= 1_THz)
			return _join(f / 1_THz, "THz");
		else if (abs(f) >= 1_GHz)
			return _join(f / 1_GHz, "GHz");
		else if (abs(f) >= 1_MHz)
			return _join(f / 1_MHz, "MHz");
		else if (abs(f) >= 1_kHz)
			return _join(f / 1_kHz, "kHz");
		else
			return _join(f / 1_Hz, "Hz");
	}

	std::string to_string(force F)
	{
		if (abs(F) >= 1_GN)
			return _join(F / 1_GN, "GN");
		else if (abs(F) >= 1_MN)
			return _join(F / 1_MN, "MN");
		else if (abs(F) >= 1_kN)
			return _join(F / 1_kN, "kN");
		else if (abs(F) >= 1_N)
			return _join(F / 1_N, "N");
		else if (abs(F) >= 1_mN)
			return _join(F / 1_mN, "mN");
		else
			return _join(F / 1_μN, "μN");
	}

}
