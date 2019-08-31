#include <iostream>
#include "functors.h"
using namespace std;

int main()
{
    Tutorials::Functors::Increment  inc(12);

    std::cout <<inc(2)<<std::endl;
    return 0;
}
