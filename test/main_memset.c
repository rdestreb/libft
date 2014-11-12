#include "../libft.h"
#include <stdio.h>

int	main_memset()
{
	char test[10] = "012345678";
	char *alloc;

	alloc = (char*)ft_memalloc(sizeof(char) * 10);

	printf("%s\n", "memset(test, 0, 5);");
	memset(test, 0, 5);
	for (int i = 0; i < 10; ++i)
	{
		printf("[%d] ", test[i]);
	}
	printf("\n%s\n", "(char*)ft_memalloc(sizeof(char) * 10);");
	for (int i = 0; i < 10; ++i)
	{
		printf("[%d] ", alloc[i]);
	}
	return (0);
}
