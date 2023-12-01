#include "hash_tables.h"



/**
 * hash_table_create - Creating Hash Table
 * @size: arr size
 * Return: If error return NULL.
 * Otherwise pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hsh_tb;
long int lp_1;

hsh_tb = malloc(sizeof(hash_table_t));
if (hsh_tb == NULL)
return (NULL);
hsh_tb->size = size;
hsh_tb->array = malloc(sizeof(hash_node_t *) * size);
if (hsh_tb->array == NULL)
return (NULL);
for (lp_1 = 0; lp_1 < size; lp_1++)
hsh_tb->array[lp_1] = NULL;
return (hsh_tb);
}


