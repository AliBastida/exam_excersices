/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:15:49 by abastida          #+#    #+#             */
/*   Updated: 2023/12/02 17:34:00 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	(void) ac;
	int fd = open(av[1], O_RDONLY);
	char *line = get_next_line(fd);

	while(line)
	{
		printf("%s\n\n", line);
		free(line);
		line = get_next_line(fd);
	}
}
