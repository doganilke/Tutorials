#include <iostream>
#include "functors.h"
using namespace std;

auto main()->int
{
    Tutorials::Functors::Increment  inc(12);

    std::cout <<inc(2)<<std::endl;

    return 0;
}
