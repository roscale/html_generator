#include <iostream>
#include <fstream>
#include "Tag.hpp"
#include "tags.hpp"

int main() {
	p P {
			p{"Je suis beau"},
	      p{"Et je fais de l'HTML"},
	      img{"www.google.com"}
	};

	std::cout << P;

	return 0;
}