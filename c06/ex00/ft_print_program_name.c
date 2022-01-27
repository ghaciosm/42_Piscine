#include <unistd.h>

int	main(int argc,char **argv)
{
	int	g;

	g = 0;
	if (argc > 0)
	{
		while (argv[0][g] != '\0')
		{
			write(1, &argv[0][g], 1);
			g++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
