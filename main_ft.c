/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:37:47 by kmorulan          #+#    #+#             */
/*   Updated: 2019/05/23 12:46:33 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	int fd;
	char const *c;

	c = "this is world we live in";
	fd = open("text.txt", O_CREAT | O_RDWR, 0700);

	if(fd == -1)
	{
		exit (1);
	}
	ft_putendl_fd(c, fd);
	return (0);
}
