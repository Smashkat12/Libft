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
<<<<<<< HEAD
	int i;
	int j;

	i = -1;
	j = (int)ft_strlen(s1);
	while (s2[++i] != '\0' && i < (int)n)
	{
		s1[j++] = s2[i];
=======
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
>>>>>>> 9842ff84b1ce0ed2bfbe2ee8cee74780f9700de5
	}
	s1[i] = '\0';
	return (res);
}
