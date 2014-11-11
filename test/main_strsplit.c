#include "../libft.h"
#include <stdio.h>

int	main_strsplit(void)
{
	char	str1[50] = "*salut**les*koupins";
	char	str2[50] = "coucou*tu*veux****voir*malib*";
	char	**tab1;
	char	**tab2;
	int		i;

	tab1 = ft_strsplit(str1, '*');
	tab2 = ft_strsplit(str2, '*');
	i = -1;
	while (tab1[++i])
		ft_putendl(tab1[i]);
	i = -1;
	while (tab2[++i])
		ft_putendl(tab2[i]);
	return (0);
}
