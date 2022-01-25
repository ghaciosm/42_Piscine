include <stdio.h>

int	ft_str_is_lowercase(char *str);

int     main(void)
{
	char    *a;
	char    *b;
	
	a = "Gulcn";
	b = "abc";
	printf("%d\n, %d", ft_str_is_lowercase(a), ft_str_is_lowercase(b));
	return (0);
}
