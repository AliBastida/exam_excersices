/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:42:56 by abastida          #+#    #+#             */
/*   Updated: 2023/01/10 13:45:15 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] = argv[1][i] - 25;
			else if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || 
					(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				argv[1][i] = argv[1][i] + 1;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);

}
