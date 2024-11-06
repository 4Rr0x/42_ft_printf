#include "ft_printf.h"

int	ft_unumlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_unumlen(n);
	nbr = (char *)malloc(sizeof(char) * len + 1);
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
		len += ft_putstr_fd(nbr, 1);
		free(nbr);
	}
	return (len);
}
