//
// Created by roscale on 1/27/17.
//

#include "Tag.hpp"
#include "utility.hpp"

unsigned long Tag::indentSize = 3;
unsigned long Tag::currentIndentation = 0;

Tag::Tag(const std::string &name, const std::string &text) : name(name), text(text) {}
Tag::Tag(const std::string &name, const std::vector<Tag> &children) : name(name), children(children) {}

std::ostream &operator<<(std::ostream &os, const Tag &tag) {
	os << "<" << tag.name;

	for (const auto &att : tag.attributes)
		os << " " << att.first << "=" << "\"" << att.second << "\"";

	if (tag.text.empty() && tag.children.empty())
		os << " />\n";

	else if (!tag.text.empty())
		os << ">" << tag.text << "</" << tag.name << ">\n";

	else if (!tag.children.empty()) {
		os << ">\n";
		for (const auto &child : tag.children) {
			// Indent
			tag.currentIndentation += tag.indentSize;
			os << std::string(" ") * tag.currentIndentation;

			// Output child
			os << child;
			tag.currentIndentation -= tag.indentSize;
		}
		// Closing tag
		os << std::string(" ") * tag.currentIndentation;
		os << "</" << tag.name << ">\n";
	}
	return os;
}

