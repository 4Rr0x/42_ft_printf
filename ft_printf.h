#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "inc/libft/libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_printptr(unsigned long long ptr);
int		ft_printunsigned(unsigned int n);
int		ft_printhex(unsigned int nbr, const char format);
void	ft_puthex(unsigned int nbr, char *hex);

#endif
