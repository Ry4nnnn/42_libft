#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;

	res = malloc(nmemb * size);
	if (!res)
		return (0);
	ft_bzero(res, (nmemb * size));
	return (res);
}