#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	g[] = "GULcİn";

	printf("%s\n", ft_strlowcase(g));
	return (0);
}
