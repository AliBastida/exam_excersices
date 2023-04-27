/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:23:47 by abastida          #+#    #+#             */
/*   Updated: 2023/04/27 12:23:47 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}


//en esta funcion lo que hago es parasarle por parametro la string de la que voy a sacar la info y el punto de inicio
//desde donde empezar a imprimir (sera la i de la siguiente funcion, que saco con strlen) y que imprima desde ese punto. 
void	write_word(char *str, int inicio)
{
	while (str[inicio] && (str[inicio] != ' ' && str[inicio]  != '	'))
	{
		write(1, &str[inicio++], 1);
	}
}

//en el primer while le digo que si str[i] es un espacio o tab o i ya es cero, que me imprima la palabra.
//luego le digo que si str[i -1] es espacio o tab, que imprima un espacio, y al final de revisar las condiciones, resta un valor a la longitud de la string, que sera el valor que tome la funcion como incio de palabra.
void	rev_word(char *str)
{
	int i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if(str[i - 1] == ' ' || str[i - 1] == '	' || i == 0)
			write_word(str, i);
		if(str[i - 1] == ' ' || str[i - 1] == '	')
			write(1, " ", 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
