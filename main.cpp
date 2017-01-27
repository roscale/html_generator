#include <iostream>
#include <fstream>
#include "Tag.hpp"

int main() {

	Tag p2("p", "222");
	std::vector<Tag> e {p2};
	Tag p("p", e);

	std::ofstream f("out.txt");
	f << p;

	return 0;
}