#include "exercise-03.h"
#include <print>

void exercise_03() {
	auto a = 25;
	auto b = 25.0;
	auto c = 25.0f;
	auto d = 'Z';
	auto e = false;
	auto f{25};
	auto g = {25};
	auto h = 4000000000LL;
	
	std::println("{}", typeid(a).name());
	std::println("{}", typeid(b).name());
	std::println("{}", typeid(c).name());
	std::println("{}", typeid(d).name());
	std::println("{}", typeid(e).name());
	std::println("{}", typeid(f).name());
	std::println("{}", typeid(g).name());
	std::println("{}", typeid(h).name());

	std::println("{}", sizeof(bool));
	std::println("{}", sizeof(char));
	std::println("{}", sizeof(short));
	std::println("{}", sizeof(int));
	std::println("{}", sizeof(long));
	std::println("{}", sizeof(long long));
	std::println("{}", sizeof(float));
	std::println("{}", sizeof(double));
	std::println("{}", sizeof(long double));
}
