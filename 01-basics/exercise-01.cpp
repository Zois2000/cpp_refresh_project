#include "exercise-01.h"
#include <iostream>
#include <print>

void exercise_01() {
	const double driven_km {487.5};
	const double consumption_liter {31.8};

	double km_factor{driven_km / 100};
	double consumption_100_km{consumption_liter / km_factor};
	std::println("Verbrauch pro 100 km: {}", consumption_100_km);
	
	double consumption_1_km{consumption_liter / driven_km};
	std::println("Liter pro Kilometer: {}", consumption_1_km);
}
