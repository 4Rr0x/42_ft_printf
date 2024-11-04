#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int		len;
	char	*nbr;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		nbr = ft_uitoa(n);
		len += ft_putstr_fd(nbr, 1);
		free(nbr);
	}
	return (len);
}
