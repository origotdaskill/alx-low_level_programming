#include <limits.h>

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
					if (sign == 1)
					{
						return (INT_MAX);
					}
					else
					{
						return (INT_MIN);
					}
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '+')
		{
		}
		else if (result != 0)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}
