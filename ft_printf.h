#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printf_char(char c);
int		ft_printf_str(char *str);
int		ft_printf_number(int num);
int		ft_printf_hex(size_t num, char *base);
int		ft_puthex(unsigned int num, char *base);
int		ft_type(const char c, va_list args);
int		ft_printf_ptr(void *ptr);
int		ft_printf_u(unsigned int num);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);

#endif
