#include <unistd.h>

void putnbr(char x)
{
    if(x >= 10)
        putnbr(x / 10);
    write(1, &"0123456789"[x % 10], 1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else
            putnbr(i);
        i++;
        write(1, "\n", 1);
    }
}