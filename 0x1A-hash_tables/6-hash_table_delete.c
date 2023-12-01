#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: the hash table.
 * Return: Nothing to return
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int lp = 0;

while (lp < ht->size)
{
while (ht->array[lp] != NULL)
{
node = ht->array[lp]->next;
free(ht->array[lp]->key);
free(ht->array[lp]->value);
free(ht->array[lp]);
ht->array[lp] = node;
}
lp++;
}
free(ht->array);
free(ht);
}
