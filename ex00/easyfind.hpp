#pragma once

#include <algorithm>
#include <iostream>
#include <exception>

template<typename T>
int easyfind(T& container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return *it;
    throw std::exception();
}
