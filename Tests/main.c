/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzabrots <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:16:20 by dzabrots          #+#    #+#             */
/*   Updated: 2017/12/18 12:47:04 by dzabrots         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define COLOR "\x1b[36m"
#define COLOR2 "\x1b[35m"
#define RESET "\x1b[0m"

int				check_input(int c, int *fd, int input)
{
	int i;

	i = 1;
	while (i != c)
	{
		 if (fd[i] == input)
			 return (fd[i]);
		 i++;
	}
	return (-1);
}

int				main(int c, char **v)
{
	int			*fd;
	int			a_fd;
	int			i;
	int			input;
	char		*line;
	int			gnl_status;

	if (c < 2)
	{
		ft_putendl("usage: gnl file_name ... file_name");
		return (0);
	}
	else
	{
		fd = (int *)malloc(sizeof(int) * c); 
	 	if (c == 2)
	 	{
	 		if ((fd[1] = open(v[1], O_RDONLY)) == -1)
	 			return (-1);
	 		while (1)
	 		{
	 			read(0, &input, 1);
	 			if (input == 10)
	 			{
	 				gnl_status = get_next_line(fd[1], &line);
					if (gnl_status == 0)
	 					return (0);
					if (gnl_status == -1)
					{
						ft_putendl("error!");
						return (-1);
					}
	 				ft_putstr(COLOR);
	 				ft_putstr(line);
	 				ft_putstr(RESET);
	 			}
	 		}
	 	}
	 	else
	 	{
	 		i = 1;
	 		while (i != c)
	 		{
	 			if ((fd[i] = open(v[i], O_RDONLY)) == -1)
	 				return (-1);
	 			i++;
	 		}
	 		while (1)
	 		{
	 			read(0, &input, 1);
	 			if ((a_fd = check_input(c, fd, input - 48)) > 0)
	 			{
	 				if (get_next_line(a_fd, &line) > 0)
						ft_putstr(line);
	 			}
	 		}
	 	}
	}
}
