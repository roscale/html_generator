//
// Created by roscale on 1/27/17.
//

#ifndef HTML_GENERATOR_P_HPP
#define HTML_GENERATOR_P_HPP


#include "Tag.hpp"

class p : public Tag {
public:
	p(std::string text);
	p(std::initializer_list<Tag> children);
};

class img : public Tag {
public:
	img(std::string url);
};


#endif //HTML_GENERATOR_P_HPP
