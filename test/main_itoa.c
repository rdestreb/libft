#include "../libft.h"
#include <stdio.h>

int	main_itoa(void)
{
	printf("Input: %d\n", 0);
	ft_putendl(ft_itoa(0));
	printf("Input: %d\n", 42);
	ft_putendl(ft_itoa(42));
	printf("Input: %d\n", 2147483647);
	ft_putendl(ft_itoa(2147483647));
	printf("Input: %d\n", -1);
	ft_putendl(ft_itoa(-1));
	printf("Input: %d\n", -42);
	ft_putendl(ft_itoa(-42));
	printf("Input: %ld\n", -2147483648);
	ft_putendl(ft_itoa(-2147483648));

	return (0);
}
