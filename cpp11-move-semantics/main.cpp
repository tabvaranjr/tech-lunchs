#include <iostream>
#include <string>

#include "Box.h"
#include "Cat.h"

Box MakeBoxOfCats(unsigned int numberOfCats)
{
	Box catbox;
	
	for (unsigned int c = 0; c < numberOfCats; c++)
	{
		Cat cat(std::to_wstring(c));
		catbox.AddCatToBox(cat);
	}

	return catbox;
}

int main(int argc, char* argv[])
{
    auto catbox = MakeBoxOfCats(3);

    return 0;
}
