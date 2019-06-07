

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *ptr;

	i = 0;
	if (s)
	{
		ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (s[i])
			{
				ptr[i] = f(i, s[i]);
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	else
	{
		return (NULL);
	}
}
