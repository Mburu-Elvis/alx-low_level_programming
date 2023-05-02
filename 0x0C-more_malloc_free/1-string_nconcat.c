#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len_s1) != '\0')
		len_s1++;
	while (*(s2 + len_s2) != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	concat_str = malloc((len_s1 + n + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		*(concat_str + i) = *(s1 + i);
	for (j = 0; j < n; j++)
		*(concat_str + i + j) = *(s2 + j);
	*(concat_str + i + j) = '\0';
	return (concat_str);
}
