#include "hiker.hpp"
#include <cassert>
#include <iostream>

namespace
{
    void life_the_universe_and_everthing()
    {
        assert(answer() == 42);
    }
}

int main()
{
    life_the_universe_and_everthing();
    std::cout << "All tests passed\n";
}
