#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

class Array
{   
    private:
        int *array;
        unsigned int size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &src);
        ~Array();
        Array &operator=(const Array &src);
        
        unsigned int getSize() const;

        int &operator[](unsigned int index);
};


#endif