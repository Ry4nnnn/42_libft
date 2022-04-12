#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;

	i = 0;
	if (!needle)
		return ((char*)haystack);
	while (*haystack && i < len)
	{
		if (haystack[i] == needle[i])
			return ((char*)needle);
		i++;
	}
	return (NULL);
}