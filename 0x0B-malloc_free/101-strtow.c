#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int words = 0, i = 0;

	for (; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL or fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int w_count, word, letter, i = 0, len, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w_count = count_words(str);
	if (w_count == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (w_count + 1));
	if (strings == NULL)
		return (NULL);
	for (; str[i] && word < w_count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0, j = i;
			for (; str[j] && str[j] != ' '; j++)
				len++;
			strings[word] = malloc(sizeof(char) * (len + 1));
			if (strings[word] == NULL)
			{
				for (; word >= 0; word--)
					free(strings[word]);
				free(strings);
				return (NULL);
			}
			for (letter = 0; letter < len; letter++, i++)
				strings[word][letter] = str[i];
			strings[word++][letter] = '\0';
		}
	}
	strings[word] = NULL;
	return (strings);
}
