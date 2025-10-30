/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:34:57 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 11:40:05 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*ft_split_words(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free_words(char **words, int j)
{
	while (j--)
		free(words[j]);
	free(words);
}

int	ft_fill_words(char **words, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = ft_split_words(&s[i], c);
			if (!words[j])
				return (ft_free_words(words, j), 0);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	if (!ft_fill_words(words, s, c))
		return (NULL);
	return (words);
}
