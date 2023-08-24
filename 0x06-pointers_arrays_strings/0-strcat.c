#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string that will be appended to the destination.
 */
char *_strcat(char *dest, char *src) 
{	
	int dest_length;
	int src_index;

	dest_length = 0;
        src_index = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	} 
	while (src[src_index] != '\0')
	{
		dest[dest_length] = src[src_index];
		dest_length++;
		src_index++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
