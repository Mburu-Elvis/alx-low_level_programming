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
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		concat_len = s1_len + s2_len;
	else
		concat_len = s1_len + n;
	concat_str = malloc(sizeof(char) * (concat_len + 1));
	if (concat_str == NULL)
		return (NULL);
	memcpy(concat_str, s1, s1_len);
	memcpy(concat_str + s1_len, s2, n);
	concat_str[concat_len] = '\0';
	return (concat_str);
}
