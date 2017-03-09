#include <stdlib.h>
#include <stdio.h>

int indexOf(unsigned char c, unsigned char* cs, int length);

//convert hex to base 64
void convertFromHex(unsigned char* b, unsigned char* hex, int length)
{
    int i = 0;
    unsigned char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    while(i < length)
    {
        unsigned char high = indexOf(hex[i*2], c, sizeof(c) / sizeof(unsigned char));
        unsigned char low = indexOf(hex[i*2+1], c, sizeof(c) / sizeof(unsigned char));
        b[i] = (high << 4) | low;
        i++;
    }
}

int indexOf(unsigned char c, unsigned char* cs, int length)
{
    if(length < 1) { return -1; }
    if(cs == NULL) { return -1; }
    unsigned char* ptr = cs;
    unsigned char* end = cs + length;
//    printf("%p\n", cs);
//    printf("%p\n", end);
    while(ptr != end)
    {
        if(*ptr == c) return ptr - cs;
        ptr++;
    }
    return -1;
}
