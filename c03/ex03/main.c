#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int	nb);

int	main()
{
	char	src[] = "Network";
	char	dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 7));
}
