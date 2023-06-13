#include <unistd.h>

void    alfamiror(char* str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ('Z' - str[i]) + 'A';

        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - str[i] + 'a';
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char** argv)
{
    if(argc == 2)
        alfamiror(argv[1]);
    write(1, "\n", 1);
}