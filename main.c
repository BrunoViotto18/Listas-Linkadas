#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main()
{
    node* lista = listInit();

    append(lista, "A", alocaChar);
    append(lista, "AB", alocaChar);
    append(lista, "ABC", alocaChar);
    append(lista, "ABCD", alocaChar);
    append(lista, "ABCDE", alocaChar);
    append(lista, "ABCDEF", alocaChar);

    printf("%s", getChar(lista, 6));

    return 0;
}
