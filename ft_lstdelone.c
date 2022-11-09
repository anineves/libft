#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (list == NULL || del == NULL)
    return;
  del(lst->content);
	free(lst);

}
