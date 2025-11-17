# include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    T new_array[0];
    array = new_array;

}

template<typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other)
{
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
        *this = other;
    return *this;
}


template <typename T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || static_cast<size_t>index >= size())
        throw std::exception();
    return(array[index]);
}

template <typename T>
T Array<T>::operator[](int index) const
{
    if (index < 0 || static_cast<size_t>index >= size())
        throw std::exception();
    return(array[index]);
}


template <typename T>
size_t Array<T>::size() const
{
    size_t  array_size = sizeof(array) / sizeof(T);
    return array_size;
}
