#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: a pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current;
    listint_t *temp;
    size_t size = 0;

    current = *h;
    while (current)
    {
        size++;
        temp = current->next;
        free(current);

        if (temp >= current)
        {
            *h = NULL;
            return (size);
        }
        current = temp;
    }

    *h = NULL;
    return (size);
}
