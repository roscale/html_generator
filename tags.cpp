//
// Created by roscale on 1/27/17.
//

#include "tags.hpp"

p::p(std::string text) : Tag("p", text) {}
p::p(std::initializer_list<Tag> children) : Tag{"p", children} {}

img::img(std::string url) : Tag("img") {
	attributes.emplace_back(std::make_pair("src", url));
}