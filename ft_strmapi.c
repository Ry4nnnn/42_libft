char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 			*res;
	unsigned int 	i;

	if (!s)
		return (0);
	res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (0);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}