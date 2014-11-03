#include "../src/libft.h"
#include "stdio.h"

int	main(void)
{
	char	s0[50] = "";
	char	s1[50] = "trololo";
	char	s2[50] = "trololo";
	char	s3[50] = "trolo";
	char	s4[50] = "trilili";

	ft_putstr("__TEST FT_STREQU__\n");
	printf("%s %s\n %d\n", s1, s2, ft_strequ(s1, s2));
	printf("%s %s\n %d\n", s1, s3, ft_strequ(s1, s3));
	printf("%s %s\n %d\n", s1, s4, ft_strequ(s1, s4));
	printf("%s %s\n %d\n", s0, s0, ft_strequ(s0, s0));

	ft_putstr("__TEST FT_STRNEQU__\n");
	printf("%s %s %s%d\n %d\n", s1, s2, "; n = ", 1, ft_strnequ(s1, s2, 1));
	printf("%s %s %s%d\n %d\n", s1, s3, "; n = ", 7, ft_strnequ(s1, s3, 7));
	printf("%s %s %s%d\n %d\n", s1, s3, "; n = ", 5, ft_strnequ(s1, s3, 5));
	printf("%s %s %s%d\n %d\n", s1, s4, "; n = ", 5, ft_strnequ(s1, s4, 5));
	printf("%s %s %s%d\n %d\n", s0, s0, "; n = ", 5, ft_strnequ(s0, s0, 5));

	return (0);
}
