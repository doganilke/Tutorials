#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
namespace Tutorials
{
    namespace Functors
    {
        class Increment
        {
        public:
            Increment(int var)
                        : m_var(var)
            {}
            int operator()(int var)
            {
                return m_var+var;
            }
        private:
            int m_var{0};
        };
    }
}
