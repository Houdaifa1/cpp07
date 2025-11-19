# include "Array.hpp"


int main ()
{

    Array<int> test(4);
    std::cout << test.size();
    try
    {
        test[5];
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }


}