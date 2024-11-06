#include "ft_printf.h"
int	ft_numlen(int n, int base)
{
	int	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n && ++count)
		n /= base;
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789";

	len = ft_numlen(n, 10);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % 10];
		else
			ret[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}
int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_itoa(n);
	len = ft_putstr_fd(nbr, 1);
	free(nbr);
	return (len);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	return (i);
}

int	ft_checkformat(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_fd((va_arg(args, int)), 1);
	else if (format == 's')
		len += ft_putstr_fd((va_arg(args, char *)), 1);
	else if (format == 'p')
		len += ft_printptr((va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr((va_arg(args, int)));
	else if (format == 'u')
		len += ft_printunsigned((va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		len += ft_printhex((va_arg(args, unsigned int)), format);
	else if (format == '%')
		len += write (1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_checkformat(ap, *(format + 1));
			format++;
		}
		else
			len += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}
