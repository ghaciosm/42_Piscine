int	ft_str_is_uppercase(char *str)
{
	int	g;
	
	g = 0;
	while (str[g] != '\0')
	{
		if ((str[g] < 'A') || (str[g] > 'Z'))
			return (0);
		g++;
	}
	return (1);
}
