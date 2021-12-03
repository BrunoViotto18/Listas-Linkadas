#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <stdbool.h>

typedef struct Node
{
    void* data;
    struct Node* next;
}node;


/* Aloca Functions */

node* alocaInt(void* valor)
{
    node* new_node = malloc(sizeof(int)+8);
    new_node->data = malloc(sizeof(int));
    new_node->data = (int*)valor;
    new_node->next = NULL;
    return new_node;
}

node* alocaFloat(void* valor)
{
    node* new_node = malloc(sizeof(float)+8);
    new_node->data = malloc(sizeof(float));
    new_node->data = (float*)valor;
    new_node->next = NULL;
    return new_node;
}

node* alocaChar(void* valor)
{
    size_t tam = sizeof(valor);
    while (tam % 4 != 0)
    {
        tam += 1;
    }

    node* new_node = malloc(tam + 8);
    new_node->data = malloc(sizeof(int));
    new_node->data = (char*)valor;
    new_node->next = NULL;
    return new_node;
}

node* alocaBool(void* valor)
{
    node* new_node = malloc(sizeof(bool)+8);
    new_node->data = malloc(sizeof(bool));
    new_node->data = (bool*)valor;
    new_node->next = NULL;
    return new_node;
}


//Inicia a lista
node* listInit()
{
    node* new_node = malloc(sizeof(node*));
    new_node->next = NULL;
    return new_node;
}


// Adiciona um elemento de qualquer tipo ao final da lista
void append(node* lista, void* valor, node*(createNode)(void*))
{
    node* new_node = createNode(valor);

    if (lista->next == NULL)
    {
        lista->next = new_node;
    }
    else
    {
        node* temp = lista->next;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void pop(node* lista, int index)
{

}

/* Get Functions */

int getInt(node* lista, int index)
{
    node* temp = lista->next;
    for(int i = 0; i < index; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nError: List index out of range!");
            exit(1);
        }
    }
    return temp->data;
}

float* getFloat(node* lista, int index)
{
    node* temp = lista->next;
    for(int i = 0; i < index; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nError: List index out of range!");
            exit(1);
        }
    }
    return temp->data;
}

char* getChar(node* lista, int index)
{
    node* temp = lista->next;
    for(int i = 0; i < index; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nError: List index out of range!");
            exit(1);
        }
    }
    return temp->data;
}

bool getBool(node* lista, int index)
{
    node* temp = lista->next;
    for(int i = 0; i < index; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nError: List index out of range!");
            exit(1);
        }
    }
    return temp->data;
}

#endif // LINKEDLIST_H_INCLUDED
