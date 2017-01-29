//
// Created by roscale on 1/27/17.
//

#include "tags.hpp"

html::html(std::initializer_list<Tag> children) : Tag{"html", children} {}

meta::meta(std::string encoding) : Tag("meta") {
	attributes.emplace_back(std::make_pair("charset", encoding));
}

head::head(std::initializer_list<Tag> children) : Tag{"head", children} {}

body::body(std::initializer_list<Tag> children) : Tag{"body", children} {}

title::title(std::string text) : Tag("title", text) {}

p::p(std::string text) : Tag("p", text) {}
p::p(std::initializer_list<Tag> children) : Tag{"p", children} {}

h1::h1(std::string text) : Tag("h1", text) {}
h2::h2(std::string text) : Tag("h2", text) {}
h3::h3(std::string text) : Tag("h3", text) {}
h4::h4(std::string text) : Tag("h4", text) {}
h5::h5(std::string text) : Tag("h5", text) {}
h6::h6(std::string text) : Tag("h6", text) {}

img::img(std::string url) : Tag("img") {
	attributes.emplace_back(std::make_pair("src", url));
}

