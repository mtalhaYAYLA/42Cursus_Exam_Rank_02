void sort_int_tab(int *tab, unsigned int size)
{
    int swap;
    int i = 0;
    while(i <= size - 1)
    {
        if(tab[i] > tab[i+1])
        {
            swap = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = swap;
            i = 0;
        }
        else
            i++;
    }
}