#include "libft.h"

int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}