#include "pxt.h"

void test_cpp()
{
    pxt::uBit.display.scroll("Hello from C++!");
}

void main()
{
    test_cpp();
}
