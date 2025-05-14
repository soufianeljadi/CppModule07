#include "Array.hpp"

Array::Array() : array(NULL), size(0) {}
Array::Array(unsigned int n) : size(n)
{
    if (n > 0)
        array = new int[n];
    else
        array = NULL;
}
Array::Array(const Array &src) : size(src.size)
{
    if (src.array)
    {
        array = new int[size];
        for (unsigned int i = 0; i < size; ++i)
            array[i] = src.array[i];
    }
    else
        array = NULL;
}
Array::~Array()
{
    delete[] array;
}

Array &Array::operator=(const Array &src)
{
    if (this != &src)
    {
        delete[] array;
        size = src.size;
        if (src.array)
        {
            array = new int[size];
            for (unsigned int i = 0; i < size; ++i)
                array[i] = src.array[i];
        }
        else
            array = NULL;
    }
    return *this;
}

int &Array::operator[](unsigned int index)
{
    if (index >= size)
        throw std::out_of_range("Index out of range");
    return array[index];
}

unsigned int Array::getSize() const
{
    return size;
}

