#include <stdio.h>

char	*ft_strcat(char	*dest, char  *src);

int	main()
{
	char	src[] = "Benguerir";
	char	dest[] = "1337 ";
	printf("%s", ft_strcat(dest, src));
}
