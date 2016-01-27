#include "Box.h"

Box::Box()
{
	_catbox.reserve(256);
}

Box::Box(const Box& other)
{
}

Box::~Box()
{
}

void Box::AddCatToBox(Cat cat)
{
	_catbox.push_back(cat);
}

void Box::MoveCatToBox(Cat&& cat)
{
	_catbox.push_back(std::move(cat));
}

