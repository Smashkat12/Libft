/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:48:18 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/02 09:53:05 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	char *res;

	res = s1;
	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (n--)
	{
		if ((s1[i] = s2[j]))
		{
			i++;
			j++;
		}
		else
		{
			return (res);
		}
	}
	s1[i] = '\0';
	return (res);
}
