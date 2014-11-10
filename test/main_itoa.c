#include "../src/libft.h"
#include <stdio.h>

int	main(void)
{
	ft_putendl(ft_itoa(0));
	ft_putendl(ft_itoa(42));
	ft_putendl(ft_itoa(2147483647));
	ft_putendl(ft_itoa(-1));
	ft_putendl(ft_itoa(-42));
	ft_putendl(ft_itoa(-2147483648));

	return (0);
}
