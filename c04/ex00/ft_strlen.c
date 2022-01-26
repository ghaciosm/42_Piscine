int	ft_strlen(char	*str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	return (g);
}
