#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

struct Number {
    unsigned char *d;
    int len;
};

struct Number add(struct Number a, struct Number b)
{
    struct Number sum;
    sum.d = malloc(max(a.len, b.len) + 1);

    int carry = 0;
    for (int i = 0; i < min(a.len, b.len); i++)
    {
        sum.d[i] = a.d[i] + b.d[i];
    }
    for (int i = min(a.len, b.len); i < max(a.len, b.len); i++)
    {
        sum.d[i] = '\0';
    }
}
