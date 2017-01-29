#include <iostream>
#include <fstream>
#include <bits/unique_ptr.h>
#include "Tag.hpp"
#include "tags.hpp"

int main() {
	std::ofstream page("myPage.html");

	page <<
	     html {
			     head {
					     meta {"utf-8"},
					     title {"My web page"},
			     },
			     body {
					     h1 {"Ma biographie"},
			           p {"Today, I'm gonna give you some flowers..."}
			     }
	     };

	return 0;
}