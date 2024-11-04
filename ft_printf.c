#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_checkformat(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar((va_arg(args, int)));
	else if (format == 's')
		len += ft_printstr((va_arg(args, char *)));
	else if (format == 'p')
		len += ft_printptr((va_arg(args, unsigned long long)));
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
			len += ft_checkformat(ap, *format++);
		else
			ft_printchar(*format);
	}
	va_end(ap);
	return (len);
}
