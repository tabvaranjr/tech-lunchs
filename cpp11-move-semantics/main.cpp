#include <iostream>
#include <string>

#include "Box.h"
#include "Cat.h"

Box MakeBoxOfCats()
{
	Box catbox;

	Cat cat1(L"Furry");
	catbox.MoveCatToBox(std::move(cat1));
	// WARNING! At this point, cat1 has been moved to catbox, so it is no longer valid!

	Cat cat2(L"Purry");
	catbox.AddCatToBox(cat2);

	Cat cat3(L"Curry");
	catbox.AddCatToBox(cat3);

	Cat cat4(L"Allergy");
	catbox.AddCatToBox(cat4);

	return catbox;
}

std::vector<Cat> MakeVectorOfCats()
{
	std::vector<Cat> cattor;
    cattor.reserve(4);

	cattor.push_back(Cat(L"Fluff"));
    cattor.push_back(Cat(L"Puff"));
    cattor.push_back(Cat(L"Ruff"));

    Cat cat4(L"Cough");
    cattor.push_back(std::move(cat4));

	return cattor;
}

int main(int argc, char* argv[])
{
	std::wcout << "Boxing cats..." << std::endl;
    auto catbox = MakeBoxOfCats();

	std::wcout << "Vectorizing cats..." << std::endl;
	auto cattor = MakeVectorOfCats();

	std::wcout << "Flushing cats..." << std::endl;

    return 0;
}
