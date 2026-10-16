#pragma once 

#include <stack>
#include <iostream>
#include <deque>
#include <iterator>



template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;

    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);
    ~MutantStack();

};

#include "MutantStack.tpp"
