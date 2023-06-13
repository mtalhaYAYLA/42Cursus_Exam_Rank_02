#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}




#include <stdio.h>
#include <stdlib.h>
void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list *test_list = malloc(sizeof(t_list));
	test_list -> data = "what up";
	test_list -> next = malloc(sizeof(t_list));
	test_list -> next -> data = "42";
	test_list -> next -> next = malloc(sizeof(t_list));
	test_list -> next -> next -> data = "peeps?";
	test_list -> next -> next -> next = NULL;

	ft_list_foreach(test_list, print_data);
	return (0);
}