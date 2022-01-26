#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		write(1, &str[g], 1);
		g++;
	}
}
