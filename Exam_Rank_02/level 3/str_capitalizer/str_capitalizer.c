#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
        
    }
    i = 0;
    while(str[i])
    {
        if(str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i + 1])
            str[i + 1] -= 32;
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc,char *argv[])
{
    int i = 1;

    if(argc > 1)
    {
        while(argv[i])
        {
            str_capitalizer(argv[i]);
            write(1,"\n",1);
            i++;
        }    
    }
}