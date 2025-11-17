# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>

template <typename T>
class Array
{
    private :

        T *array;

    public :

        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        T &operator[](int index);
        T operator[](int index) const;
        size_t size() const;

};




# endif