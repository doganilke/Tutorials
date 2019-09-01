#include <iostream>
#include "functors.h"
#include <functional>
#include "logger.h"
#include <memory>
#include <QString>
#include "jsonparser.h"
using namespace std;

void printOperation(int a,int b)
{
    std::cout <<"a is : "<<a<<" b is : "<<b<<"\n";
}

auto main()->int
{
    std::shared_ptr< mvc::logger> logger = std::make_shared<mvc::logger>();
    logger->log(mvc::logger::log_level::info,"main","Program has starting...");
    Tutorials::Functors::Increment  inc(12,logger);
    Tutorials::Functors::Binder binder(printOperation,1,2,logger);
    std::cout <<inc(2)<<std::endl;
    binder();

    JsonParser jsp;
    jsp.make_pretty_json();

    return 0;
}


