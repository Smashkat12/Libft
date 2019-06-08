

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != (char)c)
	{
		if (ptr[i] == '\0' || i == (n - 1))
		{
			return (0);
		}
		i++;
	}
	return (ptr + i);
}
