include <stdio.h>

int	ft_str_is_numeric(char	*str);

int     main(void)
{
	char    *a;
	char    *b;

	a = "12345";
	b = "abc123";
	printf("%d\n, %d", ft_str_is_numeric(a), ft_str_is_numeric(b));
	return (0);
}
