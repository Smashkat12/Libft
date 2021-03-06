/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:23:12 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 14:36:22 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	if (!n)
	{
		return ;
	}
	else
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
