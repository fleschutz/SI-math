#include "SI/all.hpp"
using namespace si;

int main()
{
	// Example 1:
	length Paris_to_Berlin = 878.080_km;
	time my_flight_time = 900_s;
	speed average_speed = Paris_to_Berlin / my_flight_time;

	// Example 2:
	mass m = kilogram(1.0);
	speed c = speed_of_light;
	energy E = m * c*c;

	return 0;
}
