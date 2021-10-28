/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:51:11 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:02 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Splits the string 's' by char 'c', generating an array of allocated strings.
*/

#include "../../libft.h"

static int	letters_len(const char *string, char separator)
{
	int	counter;

	counter = 0;
	while (string[counter] && (string[counter] != separator))
		counter++;
	return (counter);
}

static int	words_len(const char *string, char separator)
{
	int	counter;

	counter = 0;
	while (*string && (*string == separator))
		string++;
	while (*string)
	{
		while (*string && (*string != separator))
			string++;
		counter++;
		while (*string && (*string == separator))
			string++;
	}
	return (counter);
}

static char	*next_word(const char *string, char separator)
{
	while (*string && (*string == separator))
		string++;
	return ((char *)string);
}

char	**ft_split(char const *s, char c)
{
	int		counter;
	int		letter;
	int		word;
	char	**array;

	if (!s)
		return (NULL);
	word = words_len(s, c);
	array = malloc ((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	counter = 0;
	while (counter < word)
	{
		s = next_word(s, c);
		letter = letters_len(s, c);
		array[counter] = ft_substr(s, 0, letter);
		if (!array[counter])
			return (NULL);
		s = s + letter;
		counter++;
	}
	array[counter] = NULL;
	return (array);
}
