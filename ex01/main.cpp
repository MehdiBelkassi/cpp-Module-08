

#include "Span.hpp"


int main()
{
    try
    {

        Span a(2);

        a.addNumber(3);
        a.addNumber(5);
        a.addNumber(8);
        a.addNumber(200);



        std::cout << "a.longestSpan() is : "<< a.longestSpan() << std::endl;
        std::cout << "a.short() is : "<< a.shortestSpan() << std::endl;

    }
    catch (std::exception &ex)
    {
        std::cout << "error found" << std::endl;
    }
}
