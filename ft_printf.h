#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "inc/libft/libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

/* Constants */
# define SPECIFIERS "cspdiuxX%"
# define HEX_LOWER	"0123456789abcdef"
# define HEX_UPPER	"0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
void	ft_putptr(uintptr_t ptr);
int		ft_ptrlen(uintptr_t ptr);
int		ft_putstr(char *str);
int		ft_printptr(unsigned long long ptr);
char	*ft_uitoa(unsigned int n);
int		ft_printunsigned(unsigned int n);
int		ft_numlen(unsigned int n);
int		ft_printhex(unsigned int nbr, const char format);
void	ft_puthex(unsigned int nbr, char *hex);

#endif
