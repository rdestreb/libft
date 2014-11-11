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

void	char_to_index(unsigned int i, char *c)
{
	*c = i % 10 + 48;
}

void	test_striteri()
{
	char	tmp[] = "MotherFucker";

	dprintf(1, "Striteri");
	ft_striteri(tmp, &char_to_index);
	if (strcmp(tmp, "012345678901") != 0)
	{
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : MotherFucker\nf : char_to_index(unsigned int index, char *c)\n*c = i modulo 10 + 48;\n\nValeur attendue : 012345678901\nValeur obtenue : %s\n", tmp);
		return;
	}
	dprintf(1, "\x1b[32mOK\x1b[0m\n");
}

char	yolo(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	test_strmap()
{
	char	tmp[] = "MotherFucker";
	char	*dst;

	dprintf(1, "Strmap");
	dst = ft_strmap(tmp, &yolo);
	if (strcmp(tmp, "MotherFucker") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m La chaine originale a ete modifiee ; une nouvelle chaine fresh doit etre cree.\n");
		return;
	}
	if (strcmp(dst, "MOTHERFUCKER") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : MotherFucker\nf : man toupper\n\nValeur attendue : MOTHERFUCKER\nValeur obtenue : %s\n", dst);
		return;
	}
	dprintf(1, "\x1b[32mOK\x1b[0m\n");
}

char	char_to_i(unsigned int i, char c)
{
	(void) c;
	return ((int)i % 10 + 48);
}

void	test_strmapi()
{
	char	tmp[] = "MotherFucker";
	char	*dst;

	dprintf(1, "Strmapi");
	dst = ft_strmapi(tmp, &char_to_i);
	if (strcmp(tmp, "MotherFucker") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m La chaine originale a ete modifiee ; une nouvelle chaine fresh doit etre cree.\n");
		return;
	}
	if (strcmp(dst, "012345678901") != 0) {
		dprintf(1, "\x1b[31mFail\x1b[0m\nParams:\ns : MotherFucker\nf : char_to_index(unsigned int index, char c)\nreturn (i modulo 10 + 48);\n\nValeur attendue : 012345678901\nValeur obtenue : %s\n", dst);
		return;
	}
	dprintf(1, "\x1b[32mOK\x1b[0m\n");
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

	test_striteri();

	ft_putstr("__TEST STRMAP__\n");
	printf("Init : %s (%p)\n", str2, str2);
	printf("Res  : %s (%p)\n", ft_strmap(str2, to_upper), ft_strmap(str2, to_upper));

	test_strmap();

	ft_putstr("__TEST STRMAPI__\n");
	printf("Init : %s (%p)\n", str, str);
	printf("Res  : %s (%p)\n", ft_strmapi(str, char_plusi), ft_strmapi(str, char_plusi));

	test_strmapi();
	return (0);
}
