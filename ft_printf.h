#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int d);
int		ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *c);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, char const *src, size_t size);
size_t	ft_strlcat(char *dst, char const *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
static char *change_base(unsigned long long us, int b, char *r, int c);
char	*ft_point_base(unsigned long long point, int base);
int	ft_count_output(const char *save, va_list arg);
int	ft_printf(const char *input, ...);
int	ft_putstr_count(char *c);
char	*ft_tolower_all(char *c);
int	ft_treat_char(char ch);
int	ft_treat_hexa(unsigned int i, int f);
int	ft_treat_int(int i);
int	get_digit(unsigned long long n);
int	ft_treat_pointer(unsigned long long point);
int	ft_treat_something(int c, va_list args);
int	ft_treat_string(char *ch);
int	ft_treat_unit(unsigned long long unit);
static int	ft_put_unbr_count(unsigned long long n);


#endif