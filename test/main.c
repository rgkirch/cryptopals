typedef void(*test)();

extern void simpleTest();
extern void longTest();
extern void allTest();

test tests[] = {simpleTest, longTest, allTest};

int main()
{
    for(int i = 0; i < sizeof(tests) / sizeof(test); i++)
    {
        tests[i]();
    }
}
