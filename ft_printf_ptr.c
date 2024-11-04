#include "ft_printf.h"
#include "inc/libft/libft/libft.h"

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	len += write(1, "0x", 2);
	if (ptr == 0)
		write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}
