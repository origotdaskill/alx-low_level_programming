#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, copy_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
		                      
	if (s2 == NULL)
		s2 = "";
		     			 
	len1 = strlen(s1);
	len2 = strlen(s2);
               
	copy_len = (n >= len2) ? len2 : n;

	result = (char *)malloc(len1 + copy_len + 1);

	if (result == NULL)
	{
		return NULL; 
	}
		                                                         
	strcpy(result, s1);	                                                                                             
	strncat(result, s2, copy_len);         
									     			     
	return result;
}
