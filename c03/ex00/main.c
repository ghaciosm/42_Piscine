#include <stdio.h>

int	ft_strcmp(char	*s1, char  *s2);

int     main(void)
{
	char    *a = "gulc";
	char    *b = "gulc";
	char    *c = "guln";
	
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", ft_strcmp(c, a));
	return (0);
}
