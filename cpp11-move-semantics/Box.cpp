#include "Box.h"

Box::Box()
{
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

