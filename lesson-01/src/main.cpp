#include "utils.hpp"
#include <cstdint>

void foo()
{
}

void foo(int n)
{
}

struct A
{
    void foo() {}
};

namespace nfoo
{

void foo()
{
}

} // namespace foo

extern "C"
{
    void boo()
    {
    }

    struct B
    {
        void boo() {}
    };
}

int main()
{
    A a;
    a.foo();
    foo();
    nfoo::foo();
    B b;
    b.boo();
    int a1 = 10;
    uint64_t a2 = 20;
    if (a1 > a2)
    {
        a1 = -10;
    }

    for(std::size_t i = 10; i >= 0; --i)
    {
    }
    return square(2);
}
