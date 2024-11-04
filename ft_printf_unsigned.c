#include "ft_printf.h"

char	*ft_utioa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_numlen(n);
	nbr = (char *)malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	while (n != 0)
	{
		nbr[--len] = n % 10 + 48;
		n /= 10;
	}
	return (nbr);
}

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
		len += ft_putstr(nbr);
		free(nbr);
	}
	return (len);
}
