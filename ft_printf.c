#include "ft_printf.h"

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
			ft_putchar_fd(*format, 1);
	}
	va_end(ap);
	return (len);
}
