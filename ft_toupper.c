

#include "libft.h"

int	ft_toupper(int c)
{

	if (ft_islower(c))
	{
		int res;

		res = c - 32;
		return (res);
	}
	else
	{
		return (c);
	}
}
