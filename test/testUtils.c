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

