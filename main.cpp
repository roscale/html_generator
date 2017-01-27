#include <iostream>
#include <fstream>
#include "Tag.hpp"
#include "tags.hpp"

int main() {
	std::cout <<
p{
	p{"Je suis beau"},
	p{"Et je fais de l'HTML"},
	p{
		p{"Test 1"}
	},
	img{"www.idk.com"}
};

	return 0;
}