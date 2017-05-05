#include <stddef.h>
#include <crypto.hpp>
//http://sircmpwn.github.io/2017/03/15/How-I-learned-to-stop-worrying-and-love-C.html

int five() { return 5; }

unsigned long indexOf(const unsigned char c, const unsigned char* cs, const int length)
{
    if(length < 1) { return -1; }
    if(cs == NULL) { return -1; }
    const unsigned char* ptr = cs;
    const unsigned char* end = cs + length;
    while(ptr != end)
    {
        if(*ptr == c) return ptr - cs;
        ptr++;
    }
    return -1;
}

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

////convert hex to base 64
//void readBase(unsigned char *w, unsigned char *r, int length, int base)
//{
//    if(base == 16 && length % 2 == 0)
//    {
//        int i = 0;
//        unsigned char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
//        while(i < length)
//        {
//            unsigned char high = indexOf(r[i*2], c, sizeof(c) / sizeof(unsigned char));
//            unsigned char low = indexOf(r[i*2+1], c, sizeof(c) / sizeof(unsigned char));
//            w[i] = (high << 4) | low;
//            i++;
//        }
//    }
//}
//
//void writeBase(unsigned char *w, int wlen, int wbase, unsigned char *r, int rlen, int rbase)
//{ // 6 bits can represent 64 values
//    unsigned char cs[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','0','/','+'};
//    int wi = 0;
//    int ri = 0;
//    if(base == 64 && r != NULL && w != NULL)
//    {
//        for(int i = 0; i < length / 3; i++)
//        {
//            w[i] = cs[r[i] >> 2]; // first six bits
//            w[i+1] = cs[(r[i] & 0x03) << 4 | r[i+1] >> 4]; // last two bits of first byte plus first four
//            w[i+2] = cs[(r[i+1] & 0x0f) << 2 | r[i+2] >> 6]; // last half of second byte plus first two bits
//            w[i+3] = cs[r[i+2] & 0x3f]; // last six bits of the third byte
//            if (ri + 1 < length)
//            {
//                n |= indexOf(r[ri+1], cs, sizeof(cs)) << 12;
//            }
//            if (ri + 2 < length)
//            {
//                n |= indexOf(r[ri+2], cs, sizeof(cs));
//            }
//            if (r[ri+1] == '=')
//            n |= indexOf(r[ri], cs, sizeof(cs)) << 12;
//        }
//    }
//}

