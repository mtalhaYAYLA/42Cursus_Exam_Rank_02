unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 0;
    if(a <= 0 || b <= 0)
        return(0);
    if(a > b)
        i = a;
    else
        i = b;
    while(1)
    {
        if(a % i == 0 && b % i == 0)
            return(i);
        i++;
    }
}