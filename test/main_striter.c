#include "../src/libft.h"

void plusun(char *iter)
{
	*iter = *iter + 1;
}

int	main(void)
{
	char	str[50] = "trololo";

	ft_putendl(str);
	ft_striter(str, plusun);
	ft_putendl(str);
	return (0);
}
