#include "libft.h"
#include <stdio.h>

int			 main(void)
{
	t_list	*list;
	int		ft;

	ft = 42;
	printf("seghere1\n");
	list = ft_lstnew(&ft, sizeof(int));
	printf("seghere2\n");
	if(!(!!list))
		printf("error 1\n");
	printf("seghere3\n");
	if(!((*(int*)(list->content)) == 42))
		printf("error 2\n");
	printf("seghere4\n");
	list = ft_lstnew(NULL, 386);
	printf("seghere5\n");
	if(!((list->content_size) == 0))
		printf("error 3\n");
}
