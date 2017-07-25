#include<stdio.h>
#include<stdlib.h>

Class *C = NULL;

void *
createClass(void *l) {
    Class *x = malloc (sizeof (Class));
    
    if(x == NULL)
        return NULL;

    x->studentH = NULL;
    x->label = (char *)l;
    x->quantity = x->average = 0;
    x->next = C;
    C = x;

    return (void *) C->studentH;
}

void
showAllClass() {
    Class *aux = C;
    printf("Todas as turmas\n");
    while(aux != NULL){
        printf("%i\n", aux);
        aux = aux->next;
    }
}