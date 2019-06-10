/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:18:16 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/10 17:04:15 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int        count_wrds(char const *str, char c)
{
    int word;
    int i;
    word = 0;
    i = 0;
    while (str[i])
    {
        while ((str[i] == c) && (str[i] != '\0'))
        {
            i++;
        }
        if ((str[i] != c) && (str[i] != '\0'))
        {
            while ((str[i] != c) && (str[i] != '\0'))
            {
                i++;
            }
            word++;
        }
    }
    return (word);
}
char    **ft_strsplit(char const *s, char c)
{
    char    **word_str;
    int        r;
    int        i;
    int        j;
    int        words;

    r = 0;
    i = 0;
    j = 0;
    words = count_wrds(s, c);
    word_str =(char **)malloc(words * sizeof(char *));
	if (word_str)
	{
    	while (r < words)
    	{
        	while ((s[i] == c) && (s[i] != '\0'))
            	i++;
        	if ((s[i] != c) && (s[i] != '\0'))
        	{
            	j = 0;
            	while ((s[i + j] != c) && (s[i + j] != '\0'))
                	j++;
            	word_str[r] = (char *)malloc(j + 1);
            	j = 0;
            	while ((s[i] != c) && (s[i] != '\0'))
                	word_str[r][j++] = s[i++];
            	word_str[r][j] = '\0';
        	}
        r++;
    	}
    	return (word_str);
	}
	else
		return (NULL);
}


