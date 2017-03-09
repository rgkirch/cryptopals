#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

convertFromHex(unsigned char* out, unsigned char* hex, int length);

int equals(unsigned char* a, unsigned char* b, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

void simpleTest()
{
    unsigned char hex[] = {"41"};
    unsigned char bytes[sizeof(hex)];
    convertFromHex(bytes, hex, 2);
    assert(bytes[0] == 'A');
}
void allTest()
{
    int num = 256;
//    unsigned char* buffer = (unsigned char*)malloc(256);
//    unsigned char* hexInput = (unsigned char*)malloc(256 * 2);
    unsigned char buffer[num]; // fill it with binary shit
    unsigned char hexInput[num*2]; // the hex thet represents the binary shit
    unsigned char result[num]; // go back to the binary shit
    for(int i = 0; i < num; i++)
    {
        buffer[i] = i;
    }
    for (int i = 0; i < num; i++)
    {
        unsigned char t[3];
        int len = snprintf(NULL, 0, "%x", buffer[i]);
        snprintf(t, 3, "%x", buffer[i]);
        if (len == 1)
        {
            hexInput[i*2] = 0x30;
            hexInput[i*2+1] = t[0];
        } else {
            hexInput[i*2] = t[0];
            hexInput[i*2+1] = t[1];
        }
    }
    convertFromHex(result, hexInput, 256);

    assert(equals(result, buffer, 256));
}

void longTest()
{
    unsigned char hex[] = {"49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"};
    unsigned char bytes[sizeof(hex) / 2];
    convertFromHex(bytes, hex, sizeof(bytes));
    for(int i = 0; i < sizeof(bytes); ++i)
    {
        printf("%c", bytes[i]);
    }
    printf("\n");
//    unsigned char answer[] = {};
//    assert(equals(hex, answer, sizeof(hex)));
}

typedef void(*test)();
test tests[] = {simpleTest, longTest, allTest};

int main()
{
    for(int i = 0; i < sizeof(tests) / sizeof(test); i++)
    {
        tests[i]();
    }
//    allTest();
//    assert(4 << 4 | 1 == 'A');
}
