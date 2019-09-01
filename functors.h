#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include "logger.h"
#include <memory>

namespace Tutorials
{
namespace Functors
{
class Increment
{
public:
    Increment(int var,std::shared_ptr<mvc::logger>logger)
        : m_var(var),m_logger(logger)
    {
        m_logger->log(mvc::logger::log_level::info,"Increment","Increment has started...");
    }
    int operator()(int var)
    {
        return m_var+var;
    }
private:
    int m_var{0};
    std::shared_ptr<mvc::logger>m_logger{nullptr};
};

class Binder
{
public:
    typedef void(*fcnPtr)(int,int);
    Binder(fcnPtr func,int arg1,int arg2,std::shared_ptr<mvc::logger>logger)
        :m_func(func),m_arg1(arg1),m_arg2(arg2),m_logger(logger)
    {
         m_logger->log(mvc::logger::log_level::info,"Binder","Binder has started...");
    }
    void operator()()
    {
        m_func(m_arg1,m_arg2);
    }
private:
    fcnPtr m_func;
    int m_arg1,m_arg2;
     std::shared_ptr<mvc::logger>m_logger{nullptr};
};
}
}
