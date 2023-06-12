/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:32:13 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 09:17:20 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//he hecho split y rostring en el mismo archivo.
//is_space:
//si == 1
//no == 0

int is_space(char *str, int i)
{
	if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		return (1);
	return (0);
}

int count_words(char *str)
{
	int i = 0;
	int words_number = 0;
	while (str[i])
	{
		if (is_space(str, i) == 0 && is_space(str, i + 1) == 1)
			words_number++;
		i++;
	}
	return (words_number);
}

char *keep_words(char *str, int start, int end)
{
	char *word_saved;
	int n_word = 0;
	int len = end - start + 1;
	word_saved = (char *)malloc(sizeof(char) * (len + 1));
	if (!word_saved)
		return (NULL);
	while (end >= start)
	{
		word_saved[n_word] = str[start++];
		n_word++;
	}
	word_saved[n_word] = '\0';
	return (word_saved);
}
char **ft_split(char *str)
{
	int start = 0;
	int end = 0;
	int i = 0;
	char **words;
	int n_words = 0;
	words = (char **)malloc(sizeof(char *) * count_words(str) + 1);
	if (!words)
		return (NULL);
	while (str[i])
	{
		if (is_space(str,i) == 0 && (is_space(str, i-1) == 1 || i == 0))
			start = i;
		else if (is_space(str, i) == 0 && is_space(str, i + 1) == 1)
		{
			end = i;
			words[n_words++] = keep_words(str, start, end);
		}
		i++;
	}
	words[n_words] = NULL;
	return (words);
}
void putstr(char *str)
{
	int i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}
int main(int ac, char **av)
{
	char **split = ft_split(av[1]);
	int i = 1;
	if (ac == 2 && av[1])
	{
		while(split[i])
		{
			putstr(split[i]);
			write(1, "\n", 1);
			i++;
		}
		putstr(split[0]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
