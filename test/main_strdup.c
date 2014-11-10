#include "../src/libft.h"
#include "stdio.h"

int	main(void)
{
	char	test[10] = "!test1";

	printf("%s %s\n", "String : ", test);
	printf("%s %s\n", "Libc  : ", strdup(test));
	printf("%s %s\n", "Libft : ", ft_strdup(test));
	return (0);
}
