#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int lp = 0;
hash_node_t *nd;




while (lp < ht->size)
{
while (ht->array[lp] != NULL)
{
nd = ht->array[lp]->next;
free(ht->array[lp]->key);
free(ht->array[lp]->value);
free(ht->array[lp]);
ht->array[lp] = nd;
}
lp++;
}
free(ht->array);
free(ht);
}
