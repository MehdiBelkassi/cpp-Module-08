

#include <iostream>
#include <array>
#include <vector>
#include <list>

// int main()
// {
//     try
//     {

//         std::array<int, 1> v;
//         // int v[1];

//         // v.at(0) = 1;
//         // v.push_back(1);
//         // v.at(1) = 1;
//         // v[1] = 2;
//         // v[2] = 2;
//         // v[3] = 2;
//         std::cout << v.size() << std::endl;
//     }
//     catch(std::exception& e)
//     {
//         std::cout << "hi" << std::endl;
//     }

// }



// int main()
// {
//     std::vector<int> a;

//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);

//     for (std::vector<int>::iterator it = a.begin() ; it != a.end(); it++)
//         std::cout << *it << std::endl;
// }

// 1
// 2
// 3
int main()
{
    std::list<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_front(3);
    // std::cout << a.pop_back();

    for (std::list<int>::iterator it = a.begin() ; it != a.end(); it++)
    {
        if (*it == 2)
            it.pop_
        std::cout << *it << std::endl;
    }

}

