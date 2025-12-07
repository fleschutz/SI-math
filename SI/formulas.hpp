#pragma once

#include "base.hpp"

namespace si
{

	si::length motion(si::length s0, si::speed v0, si::acceleration a, si::time t)
	{
		return s0 + v0 * t + .5 * a * t * t;
	}

}
