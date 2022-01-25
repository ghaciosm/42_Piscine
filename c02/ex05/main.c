#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*a;
	char	*b;

	a = "Gulcn";
	b = "ABC";
	printf("%d\n, %d", ft_str_is_uppercase(a), ft_str_is_uppercase(b));
	return (0);
}
