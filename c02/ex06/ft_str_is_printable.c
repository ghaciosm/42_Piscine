int	ft_str_is_printable(char *str)
{
	int	c;
	
	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
				return (0);
		c++;
	}
	return (1);
}
