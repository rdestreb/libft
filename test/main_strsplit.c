#include "../libft.h"
#include <stdio.h>

void	test_strsplit()
{
	char tmp[60] = "*salut**les*koupins";
	char tmp2[80] = "salut**les*koupins*";
	char **tab;
	char **tab2;
	int i;

	dprintf(1, "Strsplit");
	tab = ft_strsplit(tmp, '*');
	tab2 = ft_strsplit(tmp2, '*');
	i = -1;
	while (tab[++i])
		ft_putendl(tab[i]);
	if (strcmp(tab[0], "salut") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : *salut**les*koupins\n\nValeur attendue (1er element du tableau): salutValeur obtenue : %s\n", tab[0]);
		return;
	}
	if (strcmp(tab[1], "les") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : *salut**les*koupins\n\nValeur attendue (2er element du tableau): lesValeur obtenue : %s\n", tab[1]);
		return;
	}

	if (strcmp(tab[2], "koupins") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : *salut**les*koupins\n\nValeur attendue (3er element du tableau): koupinsValeur obtenue : %s\n", tab[2]);
		return;
	}
	if (tab[3] != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m Le tableau n'est pas termine par 0.n");
		return;
	}

	if (strcmp(tab2[0], "salut") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : salut**les*koupins*\n\nValeur attendue (1er element du tableau): salutValeur obtenue : %s\n", tab2[0]);
		return;
	}
	if (strcmp(tab2[1], "les") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : salut**les*koupins*\n\nValeur attendue (2er element du tableau): lesValeur obtenue : %s\n", tab2[1]);
		return;
	}

	if (strcmp(tab2[2], "koupins") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : salut**les*koupins*\n\nValeur attendue (3er element du tableau): koupinsValeur obtenue : %s\n", tab2[2]);
		return;
	}

	if (tab2[3] != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m Le tableau n'est pas termine par 0.n");
		return;
	}
	dprintf(1, "\x1b[32mOK\x1b[0m\n");
}


int	main(void)
{
	char	str1[50] = "*salut**les*koupins";
	char	str2[50] = "coucou*tu*veux****voir*malib*";
	char	**tab1;
	char	**tab2;
	int		i;

	tab1 = ft_strsplit("*salut**les*koupins", '*');
	tab2 = ft_strsplit(str2, '*');
	i = -1;
	while (tab1[++i])
		ft_putendl(tab1[i]);
	i = -1;
	while (tab2[++i])
		ft_putendl(tab2[i]);
	test_strsplit();
	return (0);
}
