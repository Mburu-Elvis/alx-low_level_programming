#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH	10

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: 0 on success.
 */
int main(void)
{
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyz"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

