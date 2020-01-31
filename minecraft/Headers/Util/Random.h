#pragma once

#include <random>

namespace Random {

	void init();

	int64_t intInRange(int64_t low, int64_t high);
	float floatInRange(float low, float high);


}