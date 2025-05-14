#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), size(0) {}
template <typename T>
Array<T>::Array(unsigned int n) : size(n)
{
    if (n > 0)
        array = new T[n];
    else
        array = NULL;
}
template <typename T>
Array<T>::Array(const Array &src) : size(src.size)
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
template <typename T>
Array<T>::~Array()
{
    delete[] array;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
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

template <typename T>
unsigned int Array<T>::getSize() const
{
    return size;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= size)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= size)
        throw std::out_of_range("Index out of range");
    return array[index];
}
template class Array<int>;
template class Array<char>;
template class Array<float>;
template class Array<double>;