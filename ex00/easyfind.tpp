


template <typename T>
typename T::iterator easyfind(T& content, int x)
{
    typename T::iterator it;

    it = std::find(content.begin(), content.end(), x);

    if (it == content.end())
        throw std::runtime_error("Value not found");

    return it;
}
