#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
       	int     *a;
	int     *b;
       	int     x;
	int     y;
	
	a = &x;
	b = &y;
	ft_div_mod(25, 3, a, b);
	printf("%d\n", x);
	printf("%d", y);
}
