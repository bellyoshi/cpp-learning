#include <vector>
#include <iostream>
#include "b.hpp"

void b::bar(){
	std::vector<int> v;
	v.push_back(1 * 1);
	v.push_back(2 * 2);
	v.push_back(3 * 3);
	v.push_back(4 * 4);
	for (int i = 1;const auto& e : v) {
		std::cout << i << ":" << e << std::endl;
		i++;
	}
}
