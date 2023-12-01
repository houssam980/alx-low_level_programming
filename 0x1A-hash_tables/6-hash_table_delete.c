#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: Nothing To Return
 */
void hash_table_delete(hash_table_t *ht)
{

hash_node_t *next;
unsigned long int lp;


if (ht == NULL || ht->array == NULL || ht->size == 0)
return;
for (lp = 0; lp < ht->size; lp++)
{
while (ht->array[lp] != NULL)
{
next = ht->array[lp]->next;
free(ht->array[lp]->key);
free(ht->array[lp]->value);
free(ht->array[lp]);
ht->array[lp] = next;
}
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
