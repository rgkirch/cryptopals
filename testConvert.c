#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

extern char* convertFromHex(char* hex, int length);

int equals(char* a, char* b, int len)
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
    char hex[] = {"41"};
    char *bytes = convertFromHex(hex, 2);
    assert(bytes[0] == 'A');
    free(bytes);
}
void allTest()
{
    int num = 256;
//    char* buffer = (char*)malloc(256);
//    char* hexInput = (char*)malloc(256 * 2);
    char buffer[num + 1]; // fill it with binary shit
    char hexInput[num*2]; // the hex thet represents the binary shit
    char* hexOutput; // go back to the binary shit
    for(int i = 0; i < num; i++)
    {
        buffer[i] = i;
    }
    for (int i = 0; i < num; i++)
    {
        char t[3];
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
    printf("%s\n", hexInput);
    hexOutput = convertFromHex(hexInput, 256);
    assert(equals(hexOutput, hexInput, 256));
    free(hexOutput);
}

void longTest()
{
    char hex[] = {"49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"};
    char *bytes = convertFromHex(hex, sizeof(hex));
    for(int i = 0; i < sizeof(hex); ++i)
    {
        printf("%c", bytes[i]);
    }
    printf("\n");
//    char answer[] = {};
//    assert(equals(hex, answer, sizeof(hex)));
    free(bytes);
}

typedef void(*test)();
test tests[] = {simpleTest, longTest, allTest};

int main()
{
//    for(int i = 0; i < sizeof(tests) / sizeof(test); i++)
//    {
//        tests[i]();
//    }
    allTest();
//    assert(4 << 4 | 1 == 'A');
}
