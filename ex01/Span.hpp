#pragma once
#include<vector>
#include <iostream>
#include <exception>


class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    
    public:

        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span& operator=(const Span &other);
        ~Span();

        template <typename Iterator>
        void addNumbers(Iterator begin, Iterator end);

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();

};
