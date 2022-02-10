#include <stdio.h>
#include <malloc.h>

struct element{
    int value;
    struct element *next;
};

//Reverse print
int main(){
    struct element *head;
    struct element *tail;
    struct element *curr;
    struct element *node;
    head = tail = curr = NULL;
    int value;
    while(scanf("%d", &value) == 1){
        node = (struct element *) malloc(sizeof(struct element));
        node->value = value;
        if(head == NULL){
            node->next = NULL;
            head = tail = node;
        } else{
            node->next = head;
            head = node;
        }
    }
    curr = head;
    while(curr != NULL){
        printf("%d ", curr->value);
        curr = curr->next;
    }
    curr = head;
    while(curr){
        head = head->next;
        free(curr);
        curr = head;
    }
}
