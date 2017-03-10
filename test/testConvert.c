#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "cryptoUtils.h"
#include "testUtils.h"

void simpleTest()
{
    unsigned char hex[] = {'4','1'};
    unsigned char byte;
    convertFromHex(&byte, hex, 1);
    assert(byte == 'A');
}
void allTest()
{
    int num = 256;
//    unsigned char* binary = (unsigned char*)malloc(256);
//    unsigned char* hex = (unsigned char*)malloc(256 * 2);
    unsigned char binary[num]; // fill it with binary shit
    unsigned char hex[num*2]; // the hex thet represents the binary shit
    unsigned char result[num]; // go back to the binary shit
    for(int i = 0; i < num; i++)
    {
        binary[i] = i;
    }
    for (int i = 0; i < num; i++)
    {
        unsigned char t[3];
        snprintf(t, 3, "%02x", binary[i]);
        hex[i*2] = t[0];
        hex[i*2+1] = t[1];
    }
    convertFromHex(result, hex, 256);
    assert(equals(result, binary, 256));
}
void longTest()
{
    const int length = 48;
    unsigned char hex[] = {'4','9','2','7','6','d','2','0','6','b','6','9','6','c','6','c','6','9','6','e','6','7','2','0','7','9','6','f','7','5','7','2','2','0','6','2','7','2','6','1','6','9','6','e','2','0','6','c','6','9','6','b','6','5','2','0','6','1','2','0','7','0','6','f','6','9','7','3','6','f','6','e','6','f','7','5','7','3','2','0','6','d','7','5','7','3','6','8','7','2','6','f','6','f','6','d'};
    unsigned char bytes[length];
    assert(sizeof(hex) == (2 * length));
    convertFromHex(bytes, hex, length);
    assert(equals("I'm killing your brain like a poisonous mushroom", bytes, length));
//    fwrite(bytes, 1, length, stdout);
}
