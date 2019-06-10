

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dstptr;
	char *srcptr;

	dstptr = dst;
	srcptr = ( char*)src;
	i = 0;
	if ((n == 0) || (dstptr == srcptr))
	{
		return (dst);
	}
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dst);
}
