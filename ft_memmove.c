#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	char	*s;
	char	*d;

	s = (char*)src;
	d = (char*)dst;
	if (!s && !d)
		return (0);
	if (s < d)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dst);
}