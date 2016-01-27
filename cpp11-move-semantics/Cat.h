#ifndef _CAT_H_
#define _CAT_H_

#include <string>

class Cat
{
public:
    // Default constructor.
    Cat();

    // Constructor.
    explicit Cat(const std::wstring& name);

    // Copy-constructor.
    Cat(const Cat& other);

    // Move constructor
    Cat(Cat&& other);

    // Destructor.
    ~Cat();

    // Copy assignment operator.
    Cat& operator=(const Cat& other);

    // Move assignment operator.
    Cat& operator=(Cat&& other);

private:
	std::wstring _name;
};

#endif
