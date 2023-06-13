t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;

    tmp = lst;
    while(lst->next)
    {
        if((*cmp)(lst->data, lst->next->data) == 0)
        {
            int t;
            t = lst->data;
            lst->data = lst->next->data;
            lst->next->data = t;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return(lst);
}