/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:32:23 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/02 12:44:25 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while((s1[i] - s2[i] == 0) && (s1[i] && s2[i]))
	{
		i++;
	}
	return ((const unsigned char*)s1[i] - (const unsigned char *)s2[i]);
}
