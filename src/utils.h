#include <iostream>
#include <algorithm>

template <typename T>
void PrintContainer(const T& container)
{
    auto print_callback = [](T::value_type value)
    {
        std::cout << value << " ";
    };

    std::for_each(container.begin(), container.end(), print_callback);

    std::cout << std::endl;
}
