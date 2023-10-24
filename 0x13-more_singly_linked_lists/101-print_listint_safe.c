#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    const listint_t *temp;
    size_t count = 0;

    current = head;

    while (current)
    {
        count++;
        printf("[%p] %d\n", (void *)current, current->n);

        temp = head;
        head = head->next;

        if (temp <= current)
            break;
        current = head;
    }

    if (temp > current)
        return (count);

    printf("-> [%p] %d\n", (void *)current, current->n);
    return (count);
}
