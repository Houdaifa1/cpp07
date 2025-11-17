# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T1, typename F>
void iter(T1 *array_ptr, const unsigned int array_size, F arr_func)
{
    if (!array_ptr || !arr_func)
        return;
    for(unsigned int i = 0; i < array_size ; i++)
    {
        arr_func(array_ptr[i]);
    }

}


# endif