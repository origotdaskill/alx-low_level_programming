#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_password(char *password);

char random_char()
{
	return rand() % 94 + 33;
}
void generate_password(char *password, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		password[i] = random_char();
	}
	password[length] = '\0';
}

int main() 
{
	srand(time(NULL));
	int password_length = 10;
	char password[password_length + 1];
	int i;

	for (i = 0; i < 1000; i++)
	{
		generate_password(password, password_length);
		if (check_password(password)
		{
			printf("Valid password found: %s\n", password);
			break;
		}
	}

	return (0);
}
