// Taken and adapted from MSDN:
// * https://msdn.microsoft.com/en-us/library/dd293665.aspx

#include "MovableMemoryBlock.h"
#include <algorithm>

// Simple constructor that initializes the resource.
MovableMemoryBlock::MovableMemoryBlock(size_t length)
  : _length(length)
  , _data(new int[length])
{
}

// Destructor.
MovableMemoryBlock::~MovableMemoryBlock()
{
     // Delete the resource.
     delete[] _data;
}

// Copy constructor.
MovableMemoryBlock::MovableMemoryBlock(const MovableMemoryBlock& other)
  : _length(other._length)
  , _data(new int[other._length])
{
  std::copy(other._data, other._data + _length, _data);
}

// Move constructor.
MovableMemoryBlock::MovableMemoryBlock(MovableMemoryBlock&& other)
   : _data(nullptr)
   , _length(0)
{
   // Copy the data pointer and its length from the
   // source object.
   _data = other._data;
   _length = other._length;

   // Release the data pointer from the source object so that
   // the destructor does not free the memory multiple times.
   other._data = nullptr;
   other._length = 0;
}

// Copy assignment operator.
MovableMemoryBlock& MovableMemoryBlock::operator=(const MovableMemoryBlock& other)
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

// Move assignment operator.
MovableMemoryBlock& MovableMemoryBlock::operator=(MovableMemoryBlock&& other)
{
   if (this != &other)
   {
      // Free the existing resource.
      delete[] _data;

      // Copy the data pointer and its length from the
      // source object.
      _data = other._data;
      _length = other._length;

      // Release the data pointer from the source object so that
      // the destructor does not free the memory multiple times.
      other._data = nullptr;
      other._length = 0;
   }
   return *this;
}

// Retrieves the length of the data resource.
size_t MovableMemoryBlock::Length() const
{
  return _length;
}
