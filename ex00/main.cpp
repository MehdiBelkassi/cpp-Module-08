


#include "easyfind.hpp"

int main()
{
    std::cout << "===== VECTOR TESTS =====" << std::endl;
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(20);

    try
    {
        std::vector<int>::iterator it;

        it = easyfind(numbers, 10);
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(numbers, 20);
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(numbers, 30);
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(numbers, 99);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    // std::cout << "\n===== LIST TESTS =====" << std::endl;
    // std::list<int> numbersList;
    // numbersList.push_back(5);
    // numbersList.push_back(15);
    // numbersList.push_back(25);
    // numbersList.push_back(15);

    // try
    // {
    //     std::list<int>::iterator it = easyfind(numbersList, 15);
    //     std::cout << "Found: " << *it << std::endl;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // std::cout << "\n===== DEQUE TESTS =====" << std::endl;
    // std::deque<int> numbersDeque;
    // numbersDeque.push_back(100);
    // numbersDeque.push_back(200);
    // numbersDeque.push_back(300);

    // try
    // {
    //     std::deque<int>::iterator it = easyfind(numbersDeque, 200);
    //     std::cout << "Found: " << *it << std::endl;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // std::cout << "\n===== EMPTY CONTAINER TEST =====" << std::endl;
    // std::vector<int> emptyNumbers;

    // try
    // {
    //     easyfind(emptyNumbers, 10);
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    return 0;
}