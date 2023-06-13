#include <unistd.h>

void    camel_to_snake(char* str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            write(1, "_", 1);
        }
        write(1, &str[i], 1);
        i++;
    }
    
}
int main(int argc, char **argv)
{
    if(argc == 2)
        camel_to_snake(argv[1]);
    write(1, "\n", 1);
}