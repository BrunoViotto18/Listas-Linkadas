#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct Node
{
    void* data;
    struct Node* next;
};

void append(struct Node* head, void* data, size_t data_size)
{
    if (head == NULL)
    {
        struct Node* new_node = malloc(sizeof(struct Node));

        head->data = malloc(data_size);
        //head->next = new_node;

        //printf("%d", head->next);
    }
    else
    {
        printf("NOT NULL");
    }
}

#endif // LINKEDLIST_H_INCLUDED
