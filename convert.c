//convert hex to base 64
char* convertFromHex(char* number, int length)
{
    char c[] {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    char* b = (char*) malloc(length * sizeof(char) / 2);
}

int indexOf(char c, char* cs,int length)
{
    if(length < 1) { return -1; }
    if(cs == NULL) { return -1; }
    char* ptr = cs;
    char* end = cs + length;
    while(*(ptr++) != c);
    if(ptr == end) return -1;
    else return end - ptr;
}
