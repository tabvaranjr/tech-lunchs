#include "Cat.h"

#include <iostream>

Cat::Cat() :
    _name(L"Nameless")
{
}

Cat::Cat(const std::wstring& name) :
    _name(name)
{
    std::wcout << _name << ": Meow!" << std::endl;
}

Cat::Cat(const Cat& other)
{
	_name = other._name;
	
	std::wcout << _name << ": What a copy-cat!" << std::endl;
}

Cat::Cat(Cat&& other)
{
	std::swap(_name, other._name);

	std::wcout << _name << ": So lazy, can't move..." << std::endl;
}

Cat::~Cat()
{
    std::wcout << _name << ": NO! It's a cat-astrophy!" << std::endl;
}


Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
        _name = other._name;

        std::wcout << _name << ": I'm dupli-cat-ing!" << std::endl;
	}

	return *this;
}

Cat &Cat::operator=(Cat&& other)
{
    if (this != &other)
    {
        std::swap(_name, other._name);
        std::wcout << _name << ": Another spot, another nap." << std::endl;
    }

    return *this;
}
