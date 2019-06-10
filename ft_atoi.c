/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:33:05 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/10 12:59:25 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	long long  num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;

	while(str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
		if ((num > 2147483648) && sign == -1 )
			return (0);
		else if ((num > 2147483647) && sign == 1)
			return (-1);
		i++;
	}
	return (num * sign);
}
