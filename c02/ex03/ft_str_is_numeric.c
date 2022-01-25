int	ft_str_is_numeric(char	*str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		if ((str[g] < '0') || (str[g] > '9'))
			return (0);
		g++;
	}
	return (1);
}
