#include <stdio.h>

int	ft_str_is_printable(char *str);

int     main(void)
{
	char    *a;
	char    *b;

	a = "glcn.123";
	b = "\t\n\f";
	printf("%d\n, %d", ft_str_is_printable(a), ft_str_is_printable(b));
	return (0);
}
