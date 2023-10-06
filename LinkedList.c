#include <stdio.h>
#include <stdlib.h>
#include <stdlib.c>

typedef struct node
{
    int number;
    struct node *next;
}node;


int main(void){

    node* list = NULL;
    node* n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;
    n = malloc(sizeof(node));
    if(n == NULL)(
        free(list);
        return 1;
    )
    n->number = 2;
    n->next = NULL;
    n = list->next;
    n = malloc(sizeof(node));
    if(n == NULL){
        free(list);
        free(list->next);
        return 1;
    }
    n->number = 3;
    n = list->next->next;
    for (node* temp = list; temp != NULL; temp = temp->next){
        printf("%i\n", temp->number);
    }
    
    
}