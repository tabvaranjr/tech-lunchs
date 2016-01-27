// Taken and adapted from MSDN:
// * https://msdn.microsoft.com/en-us/library/dd293665.aspx

#pragma once

class MovableMemoryBlock
{
public:
   // Simple constructor that initializes the resource.
   explicit MovableMemoryBlock(size_t length);

   // Destructor.
   ~MovableMemoryBlock();

   // Copy constructor.
   MovableMemoryBlock(const MovableMemoryBlock& other);

   // Move constructor.
   MovableMemoryBlock(MovableMemoryBlock&& other);

   // Copy assignment operator.
   MovableMemoryBlock& operator=(const MovableMemoryBlock& other);

   // Move assignment operator.
   MovableMemoryBlock& operator=(MovableMemoryBlock&& other);

   // Retrieves the length of the data resource.
   size_t Length();

private:
   size_t _length; // The length of the resource.
   int* _data; // The resource.
};
