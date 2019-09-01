#include <iostream>
#include "functors.h"
#include <functional>
#include "logger.h"
#include <memory>
using namespace std;

void printOperation(int a,int b)
{
    std::cout <<"a is : "<<a<<" b is : "<<b<<"\n";
}

auto main()->int
{
    std::shared_ptr< mvc::logger> logger = std::make_shared<mvc::logger>();
    logger.get()->log(mvc::logger::log_level::info,"main","Program is starting...");
    Tutorials::Functors::Increment  inc(12,logger);
    Tutorials::Functors::Binder binder(printOperation,1,2,logger);
    std::cout <<inc(2)<<std::endl;
    binder();
    return 0;
}


