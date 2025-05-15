#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template <typename T> class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array() : array(NULL), size(0) {}
        Array(unsigned int n) : size(n)
        {
            if (n > 0)
                array = new T[n];
            else
                array = NULL;
        }
        Array(const Array &src) : size(src.size)
        {
            if (size > 0)
            {
                array = new T[size];
                for (unsigned int i = 0; i < size; ++i)
                    array[i] = src.array[i];
            }
            else
                array = NULL;
        }
        ~Array()
        {
            delete[] array;
        }
        Array &operator=(const Array &src)
        {
            if (this != &src)
            {
                delete[] array;
                size = src.size;
                if (size > 0)
                {
                    array = new T[size];
                    for (unsigned int i = 0; i < size; ++i)
                        array[i] = src.array[i];
                }
                else
                    array = NULL;
            }
            return *this;
        }
        unsigned int getSize() const
        {
            return size;
        }
        T &operator[](unsigned int index)
        {
            if (index >= size)
                throw std::out_of_range("Index out of range");
            return array[index];
        }
        const T &operator[](unsigned int index) const
        {
            if (index >= size)
                throw std::out_of_range("Index out of range");
            return array[index];
        }

};


#endif