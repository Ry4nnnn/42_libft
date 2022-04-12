#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t i;
	size_t slen;
	char *dst;

	slen = ft_strlen(s);
	dst = (char*)malloc(slen + 1);
	if (!dst)
		return (0);
	i = 0;
	while (i < slen)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}