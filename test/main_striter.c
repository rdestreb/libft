#include "../libft.h"
#include <stdio.h>

void plusun(char *iter)
{
	*iter = *iter + 1;
}

void plusi(unsigned int i, char *iter)
{
	*iter = *iter + i;
}

char	to_upper(char c)
{
    if (c <= 'z' && c >= 'a')
        return (c - 32);
    else
        return (c);
}

char char_plusi(unsigned int i, char iter)
{
	iter = iter + i;
	return (iter);
}

int	main_striter(void)
{
	char	str[50] = "012345678";
	char	str2[50] = "abcdef";

	ft_putstr("__TEST STRITER__\n");
	ft_putendl(str);
	ft_striter(str, plusun);
	ft_putendl(str);

	ft_putstr("__TEST STRITERI__\n");
	ft_putendl(str2);
	ft_striteri(str2, plusi);
	ft_putendl(str2);

	ft_putstr("__TEST STRMAP__\n");
	printf("Init : %s (%p)\n", str2, str2);
	printf("Res  : %s (%p)\n", ft_strmap(str2, to_upper), ft_strmap(str2, to_upper));

	ft_putstr("__TEST STRMAPI__\n");
	printf("Init : %s (%p)\n", str, str);
	printf("Res  : %s (%p)\n", ft_strmapi(str, char_plusi), ft_strmapi(str, char_plusi));

	return (0);
}
