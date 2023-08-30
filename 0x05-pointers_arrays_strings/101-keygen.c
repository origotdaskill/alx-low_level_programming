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
		if (check_password(password))
		{
			printf("Valid password found: %s\n", password);
			break;
		}
	}

	return (0);
}
bool check_password(char *password) {
    // Your logic to check the validity of the password goes here
    // For example, you can compare the password against some criteria

    // For demonstration purposes, let's assume a simple criteria
    // where the password should be at least 8 characters long
    int length = 0;
    while (password[length] != '\0') {
        length++;
    }
    if (length >= 8) {
        return true; // Password is valid
    } else {
        return false; // Password is not valid
    }
}
