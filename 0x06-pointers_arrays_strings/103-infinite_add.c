#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int idx_n1 = strlen(n1) - 1;
	int idx_n2 = strlen(n2) - 1;
	int idx_r = size_r - 1;

	r[idx_r] = '\0';

	while (idx_n1 >= 0 || idx_n2 >= 0)
	{
		int digit1 = idx_n1 >= 0 ? n1[idx_n1] - '0' : 0;
		int digit2 = idx_n2 >= 0 ? n2[idx_n2] - '0' : 0;

 		int sum = digit1 + digit2 + carry;
	
		carry = sum / 10;
		r[idx_r] = (sum % 10) + '0';
		idx_n1--;
		idx_n2--;
		idx_r--;
	}
	if (carry)
	{
		if (idx_r < 0)
		{			
			return 0;
		}	
	r[idx_r] = carry + '0';
	}
	if (idx_r < 0)
	{
		return (0);
	}
	memmove(r, r + idx_r, size_r - idx_r);
	return (r);
}
