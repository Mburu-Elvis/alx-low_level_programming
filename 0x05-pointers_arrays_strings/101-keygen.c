#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH	10

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	const char valid_chars[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	if (argc == 2 && strcmp(argv[1], " ./101-keygen ") == 0) {
		printf("Tada! Congrats\n");
		return (0);
	}

	for (i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

