/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 10:53:31 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/02 13:27:29 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(i < (n - 1))
	{
		if((s1[i] - s2[i] == 0) && (s1[i] && s2[i]))
		{
			i++;
		}
		else
		{
			break;
		}
		n -= 1;
	}
	return (s1[i] - s2[i]);
}
