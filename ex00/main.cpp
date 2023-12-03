#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <exception>


int main()
{

    std::vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(0);

    try
    {
        std::cout << easyfind(v, 34) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
