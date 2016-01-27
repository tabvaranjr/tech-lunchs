#ifndef _BOX_H_
#define _BOX_H_

#include <vector>
#include "Cat.h"

class Box
{
public:
    Box();
    Box(const Box& other);
    ~Box();

	void AddCatToBox(Cat cat);

private:
	std::vector<Cat> _catbox;
};

#endif
