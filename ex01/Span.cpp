#include "Span.hpp"

Span::Span()
{
    std::cout << "Span Default constructor called\n";
}


Span::Span(unsigned int N): N(N)
{
    std::cout << "Span constructor called\n";
}

Span::Span(const Span &other): N(other.N) //to check
{
    std::cout << "Span copy constructor called\n";
}

Span& Span::operator=(const Span &other)
{
    std::cout << "Span copy assigment operator called\n";
    if (this != &other)
        N = other.N;
    return (*this);
}

void Span::addNumber(int number)
{
    if (numbers.size() >= N)
        throw std::exception();

    numbers.push_back(number);
}

int Span::shortestSpan()
{
    int shortestspan;
    if (numbers.size() < 2)
        throw std::exception();

    std::vector<int>ascending = numbers;
    std::sort(ascending.begin(), ascending.end());

    shortestspan = *(ascending.begin() + 1) - *ascending.begin();
    for(std::vector<int>::iterator i = ascending.begin(); i != ascending.end() - 1; i++)
    {
        int difference = *(i + 1) - *i;
        if (shortestspan > difference)
            shortestspan = difference;
    }
    return shortestspan;
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw std::exception();

    std::vector<int>::iterator min = std::min_element(numbers.begin(), numbers.end()); //auto ?
    std::vector<int>::iterator max = std::max_element(numbers.begin(), numbers.end());

    return (*max - *min);
}

Span::~Span()
{
    std::cout << "Span destructor called\n";
}

template <typename t>
void Span::addNumbers(t begin, t end)
{

    for (t i = begin; i != end ; i++)
    {
        addNumber(*i);
    }
}
