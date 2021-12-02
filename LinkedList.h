#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct Node
{
    void* data;
    struct Node* next;
}Node;

typedef struct Head
{
    struct Node* next;
}Head;


Head list_init(Head head)
{
    head.next = NULL;
    return head;
}

void append(Head head, void* data, size_t data_size)
{
    Node* new_node;
    new_node = malloc(sizeof(new_node));
    new_node->data = malloc(data_size);
    new_node->data = data;
    new_node->next = NULL;

    if (head.next == NULL)
    {
        head.next = &new_node;
    }
    else
    {
        Node node;
        node = *head.next;

        while (node.next != NULL)
        {
            node = *node.next;
        }

        node.next = &new_node;
    }
}

#endif // LINKEDLIST_H_INCLUDED
