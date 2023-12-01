#include "hash_tables.h"


/**
 * hash_table_print - print key and value
 * @ht: the hash table
 * Return: nothing to return
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int lp, ctr = 0;
hash_node_t *node;

if (ht == NULL)
return;
printf("{");
for (lp = 0; lp < ht->size; lp++)
{
if (ht->array[lp] != NULL)
{
node = ht->array[lp];
while (node != NULL)
{
if (ctr > 0)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
node = node->next;
ctr++;
}
}
}
printf("}\n");
}
