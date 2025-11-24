template<typename T>
Array<T>::Array() : array(NULL), array_size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), array_size(n){}

template <typename T>
Array<T>::Array(const Array &other)
{
    array_size = other.size();
    array = new T[array_size];
    for (unsigned int i = 0; i < array_size; i++)
        array[i] = other.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete [] array;
        array_size = other.size();
        array = new T[array_size];
        for (unsigned int i = 0; i < array_size; i++)
            array[i] = other.array[i];
    }
    return *this;
}


template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= size())
        throw std::out_of_range("Index is out of bounds");
    return(array[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= size())
        throw std::out_of_range("Index is out of bounds");
    return(array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return array_size;
}

template <typename T>
Array<T>::~Array()
{
    delete []array;
}
