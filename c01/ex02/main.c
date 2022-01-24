#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main()
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}
