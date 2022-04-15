#include "libft.h"


static size_t	word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s == c)
			i++;
		if (s[i] != c && s[i])
			count += 1;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}


char **ft_split(char const *s, char c)
{
	char **res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	res = (char **)malloc(sizeof(s) *word(s, c) + 1);
	if (!res)
		return (0);
	while ()
}