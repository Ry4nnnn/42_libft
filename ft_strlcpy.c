#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t x;
	size_t y;
	
	x = 0;
	if (!src)
		return (0);
	while (src[x])
		x++;
	if (!dstsize)
		return (x);
	y = 0;
	while (src[y] && y < dstsize - 1)
	{
		dst[y] = src[y];
		y++;
	}
	dst[y] = '\0';
	return (dstsize);
}