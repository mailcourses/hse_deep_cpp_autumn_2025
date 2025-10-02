#include <cstdint>

int main()
{
    int arr[2000000];

    const int * const ptr = new int{100};
    *ptr = 500;
    ptr = nullptr;

    return 0;
}

