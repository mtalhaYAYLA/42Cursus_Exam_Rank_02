t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;

    tmp = lst;
    while(lst->nex != NULL)
    {
        if(((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return(lst);
}