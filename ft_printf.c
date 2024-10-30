#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	char	*start;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			start = (char *)format;
		}
	}
}
