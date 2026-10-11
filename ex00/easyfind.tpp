


template <typename T>
void easyfind(T &content, int x)
{
    typename T::iterator it = content.begin();

    while (it != content.end())
    {
        if (*it == x)
        {
            std::cout<< "Found\n";
            return;
        }
        ++it;
    }
    std::cout<< "Not Found\n";
}
