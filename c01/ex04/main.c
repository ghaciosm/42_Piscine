#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*x;
	int	*y;

	a = 12;
	b = 3;
	x = &a;
	y = &b;
	ft_ultimate_div_mod(x,y);
	printf("%d\n",a);
	printf("%d\n",b);
	return (0);
}
