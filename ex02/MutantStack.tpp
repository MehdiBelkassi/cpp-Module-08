#include "MutantStack.hpp"


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}

MutantStack::MutantStack()
{
    std::cout << "MutantStack Default constructor called\n";
}

MutantStack::MutantStack(const MutantStack& other)
{
    std::cout << "MutantStack copy constructor called\n";
}

MutantStack& MutantStack::operator=(const MutantStack& other)
{
    std::cout << "MutantStack copy assigment operator called\n";
    return (*this);
}

MutantStack::~MutantStack()
{
    std::cout << "MutantStack destructor called\n";
}