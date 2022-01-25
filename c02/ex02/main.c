include <stdio.h>

int	ft_str_is_alpha(char	*str);

int     main(void)
{
	char    *a;
	char    *b;

	a = "glcn3";
	b = "gulcin";

	printf("%d\n, %d", ft_str_is_alpha(a), ft_str_is_alpha(b));
	return (0);
}
