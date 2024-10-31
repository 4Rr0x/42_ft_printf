#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "incs/libft/libft/libft.h"
# include <stdarg.h>
#include <unistd.h>


/* Constants */
# define SPECIFIERS "cspdiuxX%"
# define HEX_LOWER	"0123456789abcdef"
# define HEX_UPPER	"0123456789ABCDEF"

int			ft_printf(const char *format, ...);
int			ft_printchar(int c);
int			ft_printstr(char *str);

#endif
