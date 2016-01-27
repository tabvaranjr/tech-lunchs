// Taken and adapted from MSDN:
// * https://msdn.microsoft.com/en-us/library/dd293665.aspx

#include "MemoryBlock.h"
#include <algorithm>

// Simple constructor that initializes the resource.
MemoryBlock::MemoryBlock(size_t length)
  : _length(length)
  , _data(new int[length])
{
}

// Destructor.
MemoryBlock::~MemoryBlock()
{
     // Delete the resource.
     delete[] _data;
}

// Copy constructor.
MemoryBlock::MemoryBlock(const MemoryBlock& other)
  : _length(other._length)
  , _data(new int[other._length])
{
  std::copy(other._data, other._data + _length, _data);
}

// Copy assignment operator.
MemoryBlock& MemoryBlock::operator=(const MemoryBlock& other)
{
  if (this != &other)
  {
     // Free the existing resource.
     delete[] _data;

     _length = other._length;
     _data = new int[_length];
     std::copy(other._data, other._data + _length, _data);
  }
  return *this;
}

// Retrieves the length of the data resource.
size_t MemoryBlock::Length() const
{
  return _length;
}
