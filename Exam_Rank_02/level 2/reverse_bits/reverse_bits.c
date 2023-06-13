#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    int j = 8;
    unsigned char s[j];
    while(i--)
    {
        s[j] = (((octet >> i) & 1) + '0');
        j--;
    }
    while (j <= 8)
    {
        write(1, &s[j], 1);
        j++;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char k = 'a' ;

    reverse_bits(k);
}
