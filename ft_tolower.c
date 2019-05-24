

#include "libft.h"

int	ft_tolower(int c)
{

	if (ft_isupper(c))
	{
		int res;

		res = c + 32;
		return (res);
	}
	else
	{
		return (c);
	}
}
