# include "iter.hpp"

void print_char(const char  &element)
{
    std::cout << element;
}

void inc_char(char &c)
{
    c++;
}


void print_int(const int  &element)
{
    std::cout << element;
}

void inc_int(int &i)
{
    i++;
}


int main ()
{

    char arr[3] = "ac";


    ::iter(arr, 2, print_char);
    std::cout << "   after inc ====>  ";
    ::iter(arr, 2, inc_char);
    ::iter(arr, 2, print_char);
    std::cout << std::endl;
    
    int arr2[2] = {1, 2};
  
    ::iter(arr2, 2, print_int);
    std::cout << "   after inc ====>  ";
    ::iter(arr2, 2, inc_int);
    ::iter(arr2, 2, print_int);
    std::cout << std::endl;


}