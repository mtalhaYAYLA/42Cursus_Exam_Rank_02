#include <unistd.h>

void ft_print_number(int no)
{
    if(no > 9)
        ft_print_number(no / 10);
    write(1, &"0123456789"[no % 10], 1);
}
int main()
{
    int i = 1;

    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else
           ft_print_number(i);
        write(1, "\n", 1);
        i++;
    }
}