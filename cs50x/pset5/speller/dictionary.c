// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];
int word_count = 0;
// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int i = hash(word);
    node *current_node;
    current_node = table[i];
    while (current_node != NULL)
    {
        if (strcasecmp(current_node->word, word) == 0)
        {
            return true;
        }
        current_node = current_node->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int word_ascii = 0;
    int word_size = strlen(word);
    for (int i = 0; i < word_size; i++)
    {
        word_ascii = word_ascii + toupper(word[i]);
    }
    word_ascii = word_ascii + word_size;
    int bucket = word_ascii % N;
    return bucket;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        return false;
    }

    char temp[LENGTH + 1];

    while (fscanf(source, "%s", temp) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        strcpy(n->word, temp);
        int index = hash(n->word);
        n->next = table[index];
        word_count++;
        table[index] = n;
    }
    fclose(source);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *current = table[i];
        node *next_node;

        while (current != NULL)
        {
            next_node = current->next;
            free(current);
            current = next_node;
        }
        table[i] = NULL;
    }
    return true;
}
