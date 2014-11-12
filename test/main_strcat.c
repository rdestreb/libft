#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main_strcat(void)
{
	char	s0[50] = "test";
	char	s1[50] = "test";
	char	s2[50] = "test";
	char	s3[50] = "test";
	char	s4[50] = "test";
	char	s5[50] = "test";
	char	s6[50] = "test";
	char	s7[50] = "test";
	char	s8[50] = "test";
	char	s9[50] = "test";
	char	s10[50] = "test";
	char	s11[50] = "test";
	char	s12[50] = "test";
	char	s13[50] = "test";
	char	s14[50] = "test";
	char	s15[50] = "test";

	ft_putstr("TEST __STRCAT__\n");
	printf("%s %s\n", "Libc  : ", strcat(s0, "icule"));
	printf("%s %s\n\n", "Libft : ", ft_strcat(s1, "icule"));

	ft_putstr("TEST __STRNCAT__\n");
	ft_putstr("n = 0\n");
    printf("%s %s\n", "Libc  : ", strncat(s2, "icule", 0));
    printf("%s %s\n\n", "Libft : ", ft_strncat(s3, "icule", 0));
	ft_putstr("n = 2\n");
    printf("%s %s\n", "Libc  : ", strncat(s4, "icule", 2));
    printf("%s %s\n\n", "Libft : ", ft_strncat(s5, "icule", 2));
	ft_putstr("n = 10\n");
    printf("%s %s\n", "Libc  : ", strncat(s6, "icule", 10));
    printf("%s %s\n\n", "Libft : ", ft_strncat(s7, "icule", 10));

	ft_putstr("TEST __STRLCAT__\n");
	printf("%s %zd\n", "Libc  : ", strlcat(s2, "icule", 0));
    printf("%s %zd\n\n", "Libft : ", ft_strlcat(s3, "icule", 0));
	printf("%s %zd\n", "Libc  : ", strlcat(s8, "icule", 1));
    printf("%s %zd\n\n", "Libft : ", ft_strlcat(s9, "icule", 1));
	printf("%s %zd\n", "Libc  : ", strlcat(s10, "icule", 4));
    printf("%s %zd\n\n", "Libft : ", ft_strlcat(s11, "icule", 4));
	printf("%s %zd\n", "Libc  : ", strlcat(s12, "icule", 5));
    printf("%s %zd\n\n", "Libft : ", ft_strlcat(s13, "icule", 5));
	printf("%s %zd\n", "Libc  : ", strlcat(s14, "icule", 10));
    printf("%s %zd\n\n", "Libft : ", ft_strlcat(s15, "icule", 10));

	return (0);
}
