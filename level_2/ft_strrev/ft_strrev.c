/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:30:11 by abastida          #+#    #+#             */
/*   Updated: 2023/05/05 12:30:11 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}
char    *ft_strrev(char *str)
{
  char tmp;
  int i= 0;
  int j = ft_strlen(str)- 1;
  while(str[i]  && i < j)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }
  return(str);
}

int main()
{
  char s1[9] = "holacara";
  printf("%s\n", ft_strrev(s1));
  return(0);
}
