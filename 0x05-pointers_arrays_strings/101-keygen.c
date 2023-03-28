#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * generatePassword - generates unique passwords
  * @passwLength: parameter
  *Return: void
  */

void generatePassword(int passwLength)
{
	char characters[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";
	int i;

	srand(time(NULL));
	for (1 = 0; i < passwLength; i++)
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	printf("\n");
}

/**
  * main - call generatePassword
  * Return: 0 for success
  */

int main(void)
{
	int passwLength;
	printf("Enter the length of your password");
	scanf("%d", &passwLength);

	generatePassword(passwLength);

	return (0);
}
