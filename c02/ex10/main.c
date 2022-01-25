include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int     main(void)
{
	char    src[] = "kaynak";
	char    dest[] = "";
	
	printf("%d\n, %s", ft_strlcpy(dest, src, 4), dest);
	return (0);
}
