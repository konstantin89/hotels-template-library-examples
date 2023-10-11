#include "range/range.h"
#include "utils.h"

using namespace htls::range;

void TransformExample()
{
    std::cout << ">>> TransformExample" << std::endl;

    std::vector<int> v{1, 2, 4, 8, 16, 32};
    auto increase_by_1 = [](int i) { return ++i; };

    auto result = Apply(v,
        Transform(increase_by_1),
        ToVector());

    PrintContainer(v);
    PrintContainer(result);

    std::cout << "<<<" << std::endl;
}

void ComplexExample()
{
    std::cout << ">>> ComplexExample" << std::endl;

    std::vector<int> v{1, 2, 3};
    auto subtract_from_10 = [](int i) { return 10 - i; };
    auto odd_numbers = [](int i) { return i % 2 == 1; };

    auto result = Apply(v,              //
        Transform(subtract_from_10),    //
        ToVector(),                     //
        Sort(std::greater<>()),         //
        Compose(Filter(odd_numbers),    //
            Take(2),                    //
            ToVector()),                //
        Take(1),                        //
        ToVector()                      //
    );


    PrintContainer(v);
    PrintContainer(result);

    std::cout << "<<<" << std::endl;
}