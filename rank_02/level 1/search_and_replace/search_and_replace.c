#include <unistd.h>


int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 4)
    {
        while(argv[1][i]  && !argv[2][1] && !argv[3][1])
        {
            if(argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1,"\n",1);
}