#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;          // Move slow pointer one step
        fast = fast->next->next;    // Move fast pointer two steps

        if (slow == fast)  // If they meet, there is a loop
        {
            slow = head;  // Move slow pointer to the head
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Return the start of the loop
        }
    }

    return NULL; // No loop found
}
