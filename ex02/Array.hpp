#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template <typename T> class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &src);
        ~Array();
        Array &operator=(const Array &src);
        unsigned int getSize() const;
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
};


#endif