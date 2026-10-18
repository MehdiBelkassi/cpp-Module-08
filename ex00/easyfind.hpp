#pragma once
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <deque>



template <typename T>
typename T::iterator easyfind(T& content, int x);


#include "easyfind.tpp"