#include "libft.h"

int	ft_tolower(int	c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else if (c >= 'a' && c <= 'z')
		return (c);
	return (0);
}