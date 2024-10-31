#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		write(1, &str[len], 1);
	return (len);
}
