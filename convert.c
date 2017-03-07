#include <stdlib.h>
#include <stdio.h>

int indexOf(char c, char* cs, int length);

//convert hex to base 64
char* convertFromHex(char* hex, int length)
{
    int i = 0;
    char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    char* b = (char*) malloc(length * sizeof(char) / 2);
    while(i < length)
    {
        char high = indexOf(hex[i], c, sizeof(c) / sizeof(char));
        char low = indexOf(hex[i+1], c, sizeof(c) / sizeof(char));
        b[i / 2] = (high << 4) | low;
        i += 2;
    }
    return b;
}

int indexOf(char c, char* cs, int length)
{
    if(length < 1) { return -1; }
    if(cs == NULL) { return -1; }
    char* ptr = cs;
    char* end = cs + length;
    printf("%p\n", cs);
    printf("%p\n", end);
    while(ptr++ != end)
    {
        if(*ptr == c) return ptr - cs;
    }
    return -1;
}
