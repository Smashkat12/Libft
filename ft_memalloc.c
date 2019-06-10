

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *new_mem;

	new_mem = malloc(size);
	if (new_mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(new_mem, size);
	return (new_mem);
}
