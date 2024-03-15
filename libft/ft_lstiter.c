#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
        t_list *temp;

                temp = lst;
        while(lst != NULL)
        {
                f(temp->content);
                temp = temp->next;
                lst = temp;
        }
}

