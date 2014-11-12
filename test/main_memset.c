#include "../libft.h"
#include <stdio.h>

int	main_memset()
{
	char test[10] = "012345678";
	char *alloc;
	int	i;

	i = 0;
	alloc = (char*)ft_memalloc(sizeof(char) * 10);
	ft_putstr("__TEST MEMSET__\n");
	printf("memset(test, 0, 5)\n");
	memset(test, 0, 5);
	for (i = 0; i < 10; ++i)
	{
		printf("[%d] ", test[i]);
	}

	ft_putstr("\n__TEST MEMALLOC__\n");
	printf("\n(char*)ft_memalloc(sizeof(char) * 10)\n");
	for (i = 0; i < 10; ++i)
	{
		printf("[%d] ", alloc[i]);
	}
	return (0);
}
