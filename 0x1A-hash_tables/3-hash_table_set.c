#include "hash_tables.h"

/**
 * hash_table_set - Add or update in hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 0 if fail Otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *nw;
unsigned long int idx, lp;
char *val_cp;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
val_cp = strdup(value);
if (val_cp == NULL)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
for (lp = idx; ht->array[lp]; lp++)
{
if (strcmp(ht->array[lp]->key, key) == 0)
{
free(ht->array[lp]->value);
ht->array[lp]->value = val_cp;
return (1);
}
}
nw = malloc(sizeof(hash_node_t));
if (nw == NULL)
{
free(val_cp);
return (0);
}
nw->key = strdup(key);
if (nw->key == NULL)
{
free(nw);
return (0);
}
nw->value = val_cp;
nw->next = ht->array[idx];
ht->array[idx] = nw;
return (1);
}
