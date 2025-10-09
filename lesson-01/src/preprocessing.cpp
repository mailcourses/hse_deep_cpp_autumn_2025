#include "a.hpp"
#include "b.hpp"

#define MAX(x, y) (x > y ? x : y)

inline int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int a = 0;
    foo();
    boo();
    return max(++a, 1);
}

