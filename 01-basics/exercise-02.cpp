#include "exercise-02.h"
#include <iostream>
#include <print>

void exercise_02() {
	unsigned int input_seconds {};

	std::cin >> input_seconds;

	unsigned int full_hours {input_seconds / 60 / 60};
	std::println("Volle Stunden: {}", full_hours);

	unsigned int rest_minutes {input_seconds % 60 / 60};
	std::println("Verbleidbende Minuten: {}", rest_minutes);

	unsigned int rest_seconds {input_seconds % 60};
	std::println("Verbleibende Sekunden: {}", rest_seconds);
}
