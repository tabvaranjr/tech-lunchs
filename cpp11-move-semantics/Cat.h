#ifndef _CAT_H_
#define _CAT_H_

#include <string>

class Cat
{
public:
    Cat(const std::wstring& name);
    Cat(const Cat& other);
    ~Cat();

private:
	std::wstring _name;
};

#endif
