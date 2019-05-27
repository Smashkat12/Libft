

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int *res;
	int i;

	i = 0;

	if (!(res = (char *)melloc(sizeof(char) * ft_strlen(src) + 1)))
	{
		return (NULL);
		errno = ENOENT;
	}
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
