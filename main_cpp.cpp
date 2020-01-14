//#include "pxt.h"

enum test_enum {
    //% blockIdentity="test_cpp.test_val0"
    test_val0,
    //% blockIdentity="test_cpp.test_val1"
    test_val1,
    //% blockIdentity="test_cpp.test_val2"
    test_val2
};


//% weight=1 color="#333333"
//% advanced=true
namespace test_cpp
{

//% weight=30 async
//% blockId="test_fn" block="Test C++"
int test_fn()
{
    //pxt::uBit.display.scroll("Hello from C++!");
    return 123; 
}

}
