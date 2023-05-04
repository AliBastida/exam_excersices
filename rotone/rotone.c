/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:41:13 by abastida          #+#    #+#             */
/*   Updated: 2023/05/04 11:41:13 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rotone(char *str)
{
    int i = 0;
    while (str[i])
    {
      if((str[i] == 'Z') || (str[i] == 'z'))
        str[i] = str[i] - 25;
      else if((str >= 'A' && str[i] <= 'Y')
      || (str[i] >= 'a' && str[i] <= 'y'))
        str[i] = str[i] + 1;
      write(1, &str[i], 1);
      i++;
    }
}
int main()
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
    return (0);
}
