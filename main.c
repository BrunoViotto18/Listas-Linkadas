#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main()
{
    /*Node node1;
    Node node2;

    node1.data = malloc(sizeof(int));
    node1.data = 3;
    node1.next = &node2;
    node2.data = malloc(sizeof(char));
    node2.data = 'G';*/

    //printf("%c", node1.next->data);
    Head head;
    head = list_init(head);
    append(head, 3, sizeof(int));
    Node node = *head.next;
    printf("%d", head.next->data);

    return 0;
}
