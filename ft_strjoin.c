#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
		res[i++] = *s1++;
	while (*s2)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}