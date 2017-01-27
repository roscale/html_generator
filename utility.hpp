//
// Created by roscale on 1/27/17.
//

#ifndef HTML_GENERATOR_UTILITY_HPP
#define HTML_GENERATOR_UTILITY_HPP


#include <string>
#include <sstream>
#include <iostream>

std::string operator*(std::string s, unsigned long times) {
	std::ostringstream oss;
	while (times--) {
		// std::clog << times << ' ';
		// return std::string(oss.str());
		oss << s;
	}

	return std::string(oss.str());
}

#endif //HTML_GENERATOR_UTILITY_HPP
