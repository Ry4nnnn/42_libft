#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	size_t i;
	
	i = 0;
	if (!(unsigned char*) src && !(unsigned char*) dest)
		return (0);
	if (unsigned char*) src < (unsigned char*) dest)
	{
		while (++i <= n)
		{
			((unsigned char*) dest)[n - i] = ((unsigned char*)src)[n - i];
		}
	}
	else
	{
		while (i++ < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);