#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

extern char* convertFromHex(char* hex, int length);


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
    char* buffer[num];
    char* hexInput[num*2];
    char* hexOutput;
    for(int i = 0; i < num; i++)
    {
        buffer[i] = i;
    }
//    snprintf(hexInput, num, "%x", buffer);
    for (int i = 0; i < num; i++)
    {
        char t[2];
        snprintf(t, 2, "%x", buffer[i]);
        hexInput[i] = t[0];
        hexInput[i+1] = t[1];
    }
//    printf("%s\n", hexInput);
    hexOutput = convertFromHex(hexInput, 256);
//    assert(equals(hexOutput, hexInput, 256));
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
