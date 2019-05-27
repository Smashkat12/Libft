<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:57:15 by kmorulan          #+#    #+#             */
/*   Updated: 2019/05/23 15:53:05 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s)
{
	int i;
=======



#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t i;
>>>>>>> 5b7485e6073695e9c3b2649190031ffdb1204c35

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
