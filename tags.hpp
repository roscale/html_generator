//
// Created by roscale on 1/27/17.
//

#ifndef HTML_GENERATOR_P_HPP
#define HTML_GENERATOR_P_HPP


#include "Tag.hpp"

struct html : public Tag {
	html(std::initializer_list<Tag> children);
};

struct meta : public Tag {
	meta(std::string encoding);
};

struct head : public Tag {
	head(std::initializer_list<Tag> children);
};

struct body : public Tag {
	body(std::initializer_list<Tag> children);
};

struct title : public Tag {
	title(std::string text);
};

struct p : public Tag {
	p(std::string text);
	p(std::initializer_list<Tag> children);
};

struct h1 : public Tag {
	h1(std::string text);
};

struct h2 : public Tag {
	h2(std::string text);
};

struct h3 : public Tag {
	h3(std::string text);
};

struct h4 : public Tag {
	h4(std::string text);
};

struct h5 : public Tag {
	h5(std::string text);
};

struct h6 : public Tag {
	h6(std::string text);
};

struct img : public Tag {
	img(std::string url);
};

#endif //HTML_GENERATOR_P_HPP
