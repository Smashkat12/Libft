

#include "libft.h"

int        ft_strcmp(char const *s1, char const *s2)
{
    int i;

    i = 0;
    while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
    {
        i++;
    }
    return (((unsigned char *)s1)[i] - ((unsigned char* )s2)[i]);
}