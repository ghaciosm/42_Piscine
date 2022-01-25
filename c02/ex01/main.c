#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int     main()
{
	char    src[] = "kaynak";
	char    dest[] = "hedef";
	unsigned int    n;

	n = 2;

	ft_strncpy(dest, src, n);
	printf("%s\n, %s", src, dest);
	return (0);
}
