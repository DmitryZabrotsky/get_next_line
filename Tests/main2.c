/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzabrots <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 17:55:17 by dzabrots          #+#    #+#             */
/*   Updated: 2017/12/15 18:34:11 by dzabrots         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include "get_next_line.h"

int main(void)
{
		int fd;
		char *line;

		//fd = open("full", O_RDONLY);
		//close(fd);
		fd = 100000;

		ft_putnbr(get_next_line(fd,  &line));
		ft_putendl(line);
}
