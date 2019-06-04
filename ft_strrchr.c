

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;
	char *ptr;

	ptr = (char *)s;
	j = (int)ft_strlen(s);
	if(j == 0)
	{
		return (0);
	}
	while((s[j] != (char)c) && j >= 0)
	{
		j--;
	}
	return (ptr + j);
}
