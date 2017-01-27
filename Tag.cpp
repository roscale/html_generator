//
// Created by roscale on 1/27/17.
//

#include "Tag.hpp"

Tag::Tag(const std::string &name, const std::string &text) : name(name), text(text) {}

Tag::Tag(const std::string &name, const std::vector<Tag> &children) : name(name), children(children) {}

std::ostream &operator<<(std::ostream &os, const Tag &tag) {
	static unsigned long currentIndentation = 0;
	os << "<" << tag.name;

	for (const auto &att : tag.attributes) {
		os << " " << att.first << "=" << att.second;
	}

	if (tag.text.empty() && tag.children.empty())
		os << " />";
	else {
		os << ">";

		if (!tag.text.empty())
			os << tag.text;

		else if (!tag.children.empty())
			for (const auto &child : tag.children) {
				// Indent
				os << "\n";
				currentIndentation += tag.indentSize;
				os << std::string(currentIndentation, ' ');

				// Output child
				os << child;

				os << "\n";
				currentIndentation -= tag.indentSize;
				os << std::string(currentIndentation, ' ');


			}
		// Closing tag
		os << "</" << tag.name << ">";
	}
	return os;
}
