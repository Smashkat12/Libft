

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int nlen;
	int i;
	int j;

	i = 0;
	nlen = (int)ft_strlen(needle);
	if(nlen == 0)
	{
		return ((char *)&haystack[i]);
	}
	while((haystack[i] != '\0') && (i < (int)len))
	{
		j = 0;
		if(haystack[i] == needle[j])
		{
			while(haystack[i + j] == needle[j])
			{
				if(needle[j + 1] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
