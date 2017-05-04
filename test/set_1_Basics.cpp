#include "crypto.h"
#include "gtest/gtest.h"

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

//TEST(simple_test, something) {
//    unsigned char hex[] = {'4','1'};
//    unsigned char byte;
//    readBase(&byte, hex, 1, 16);
//    ASSERT_EQ(byte, 'A');
//}
//void allTest()
//{
//    int num = 256;
////    unsigned char* binary = (unsigned char*)malloc(256);
////    unsigned char* hex = (unsigned char*)malloc(256 * 2);
//    unsigned char binary[num]; // fill it with binary shit
//    unsigned char hex[num*2]; // the hex thet represents the binary shit
//    unsigned char result[num]; // go back to the binary shit
//    for(int i = 0; i < num; i++)
//    {
//        binary[i] = i;
//    }
//    for (int i = 0; i < num; i++)
//    {
//        unsigned char t[3];
//        snprintf((char *)t, 3, "%02x", binary[i]);
//        hex[i*2] = t[0];
//        hex[i*2+1] = t[1];
//    }
//    readBase(result, hex, 256, 16);
//    assert(equals(result, binary, 256));
//}
//void longTest()
//{
//    const int length = 48;
//    unsigned char hex[] = {'4','9','2','7','6','d','2','0','6','b','6','9','6','c','6','c','6','9','6','e','6','7','2','0','7','9','6','f','7','5','7','2','2','0','6','2','7','2','6','1','6','9','6','e','2','0','6','c','6','9','6','b','6','5','2','0','6','1','2','0','7','0','6','f','6','9','7','3','6','f','6','e','6','f','7','5','7','3','2','0','6','d','7','5','7','3','6','8','7','2','6','f','6','f','6','d'};
//    unsigned char bytes[length];
//    assert(sizeof(hex) == (2 * length));
//    readBase(bytes, hex, length, 16);
//    ASSERT_EQ((const unsigned char*)"I'm killing your brain like a poisonous mushroom", (const unsigned char *)bytes);
////    fwrite(bytes, 1, length, stdout);
//}


