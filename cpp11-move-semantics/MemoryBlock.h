// Taken and adapted from MSDN:
// * https://msdn.microsoft.com/en-us/library/dd293665.aspx

#pragma once

class MemoryBlock
{
public:
   // Simple constructor that initializes the resource.
   explicit MemoryBlock(size_t length);

   // Destructor.
   ~MemoryBlock();

   // Copy constructor.
   MemoryBlock(const MemoryBlock& other);

   // Copy assignment operator.
   MemoryBlock& operator=(const MemoryBlock& other);

   // Retrieves the length of the data resource.
   size_t Length();

private:
   size_t _length; // The length of the resource.
   int* _data; // The resource.
};
