The International System of Units (SI) in C++
=============================================

This repo supports type-safe programming with SI units and easy conversion to and from them. The SI comprises a coherent system of units of measurement starting with 7 base units,
which are **second** (symbol s, the unit of time), **metre** (m, length), **kilogram** (kg, mass), **ampere** (A, electric current), **kelvin** (K, thermodynamic temperature),
**mole** (mol, amount of substance), and **candela** (cd, luminous intensity).

Code Example
------------
```
auto m = 1_kg;
auto c = constant::speed_of_light_in_vacuum;
auto E = m * c * c;
```

Features
--------
* Supports type checking: Can't add a mass to a length
* Supports convenient literals, e.g. 10_km
* Supports hundreds of constants
* Supports SI units, digital units, and Imperial units
* Supports unit tests to check everything
* No runtime overhead: Compiles to nothing but simple doubles
  
Directory Tree
--------------
```
  ├📂SI
  │  ├📄constants.hpp (with SI constants)
  │  ├📄Earth.hpp (with physical characteristics of planet Earth)
  │  ├📄everything.hpp (contains everything for convenience)
  │  ├📄formulas.hpp (well-known formulas)
  │  ├📄Jupiter.hpp (physical characteristics of planet Jupiter)
  │  ├📄literals.hpp (SI literals for convenience)
  │  ├📄Mars.hpp (physical characteristics of planet Mars)
  │  ├📄Mercury.hpp (physical characteristics of planet Mercury)
  │  ├📄Moon.hpp (physical characteristics of the Moon)
  │  ├📄prefixes.hpp (the SI prefixes)
  │  ├📄printer.hpp (simple print interface for output)
  │  ├📄Sun.hpp (physical characteristics of the Sun)
  │  ├📄types.hpp (the basic SI types)
  │  ├📄unit_tests.cpp (to check everything is right)
  ├📄CMakeLists.txt (Makefile for cmake)
  ├📄LICENSE (the CC0 license)
  ├📄main.cpp (contains hundreds of usage example)
  ├📄README.md (this README)
```

Program Output
--------------
```
What's the average speed of Kiptum's world record in Marathon? It's 21.0975 km/h

What's the potential energy of 1kg mass? It's 8.98755e+10 GJ

What's the kinetic energy of a normal car at 30MPH? It's 134.895 kJ

What's the average speed? It's 187758 km/h

What's the average temperature? It's 0°C

What's the wavelength of H2 in vacuum? It's 21.1061 cm

What's the free fall time from the Eiffel Tower in Paris? It's 8.20374 sec

What's a radar's geometrical horizon (the distance it can see)? It's 10.7941 km

What's the time needed to fly non-stop around the Earth at Mach 1? It's 33.7332h

What's the travel time of sun light to Earth? It's 8.31675 min

What's the sum of 1 byte + 1kB + 1GB...(and so on)? It's 1.001e+30 bytes
```
