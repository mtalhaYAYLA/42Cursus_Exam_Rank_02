#include <unistd.h>

/* void	print_bits(unsigned char octet)
{
    int i = 7;
    while(i >= 0)
    {
        if(((octet >> i) & 1 )== 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}
 */
#include <stdio.h>
#include <stdlib.h>
void	print_bits(unsigned char octet);
int main()
{
    unsigned char k = 'a' ;

    print_bits(k);
}




#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}
