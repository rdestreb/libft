#include "../libft.h"

int	main_strlen()
{
  char	str[50] = "mon cul sur la commode";

  ft_putstr("original : ");
  ft_putnbr(strlen(str));
  ft_putchar('\n');
  ft_putstr("fourty-2 : ");
  ft_putnbr(ft_strlen(str));
  ft_putchar('\n');
  return(0);
}
