#include "hash_tables.h"

/**
 * key_index - returns the index at which the key/value pair
 *             should be stored in the array of the hash table
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    
    /* Calculate the hash value using the djb2 algorithm */
    hash_value = hash_djb2(key);
    
    /* Return the index at which the key/value pair should be stored */
    return (hash_value % size);
}
