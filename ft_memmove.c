#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	size_t i;
	
	i = 0;
	if (!(unsigned char*)src && !(unsigned char*)dst)
		return (0);
	if ((unsigned char*)src < (unsigned char*)dst)
	{
		while (++i <= n)
		{
			((unsigned char*)dst)[n - i] = ((unsigned char*)src)[n - i];
		}
	}
	else
	{
		while (i++ < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}