#include "libft.h"

void ft_lstclear(t_list **lst, void(*del)(void*))
{
    t_list *temp;

    temp = *lst;
    if (!lst || !del)
        return;
    while (temp->next != NULL)
    {
        del(temp->content);
        free (temp);
        temp = temp->next;
    }
}
