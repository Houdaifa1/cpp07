# include "iter.hpp"


template <typename T>
void arr_func(T &element)
{
    std::cout << element;
}
int main ()
{

    // char arr[3] = "ac";

    ::iter("ac", 2, arr_func<const char>);
  


}