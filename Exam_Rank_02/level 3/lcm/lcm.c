    unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int x;

    if(a == 0 || b == 0)
        return 0;
    else if(a > b)
        x = a;
    else
        x = b;
    while (1)
    {
        if(x % a == 0 && x % b == 0)
            return(x);
        x++;
    }
}