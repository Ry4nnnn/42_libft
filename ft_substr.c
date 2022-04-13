#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	unsigned int i;

	if (!s)
		return(NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if ((start + len) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (NULL);
	i = 0;
	while (len && *(s + start + i))
	{
		*(res + i) = *(s + start + i);
		i++;
		len--;
	}
	*(res + i) = '\0';
	return (res);
}