#include "Cat.h"

#include <iostream>

Cat::Cat(const std::wstring& name) 
	: _name(name)
{
    std::wcout << _name << ": Meow!" << std::endl;
}

Cat::Cat(const Cat& other)
{
	_name = other._name;
	
	std::wcout << _name << ": What a copy-cat!" << std::endl;
}

Cat::~Cat()
{
    std::wcout << _name << ": It's a cat-astrophy! x_x" << std::endl;
}
