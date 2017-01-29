//
// Created by roscale on 1/27/17.
//

#ifndef HTML_GENERATOR_TAG_HPP
#define HTML_GENERATOR_TAG_HPP


#include <string>
#include <vector>
#include <ostream>

struct Tag {
	std::string name;
	std::vector<std::pair<std::string, std::string>> attributes;
	std::string text;
	std::vector<Tag> children;

	static unsigned long indentSize;
	static unsigned long currentIndentation;

protected:
	Tag(const std::string &name, const std::string &text = "");
	Tag(const std::string &name, const std::vector<Tag> &children);

	friend std::ostream &operator<<(std::ostream &os, const Tag &tag);
};


#endif //HTML_GENERATOR_TAG_HPP
