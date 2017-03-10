#include "testUtils.h"

typedef void(*test)();

test tests[] = {simpleTest, longTest, allTest};

int main()
{
    for(int i = 0; i < sizeof(tests) / sizeof(test); i++)
    {
        tests[i]();
    }
}
