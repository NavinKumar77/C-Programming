#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    struct Node{
        int data;
        struct Node* next;
    };
    struct linked_list{
        struct Node* head;
    };
    void createlist(struct linked_list* list, int elem){
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = elem;
        newnode->next = NULL;
        
        if(list->head == NULL){
            list->head = newnode;
        }
        else{
            struct Node* temp = list->head;
            while(temp->next!= NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void display(struct linked_list* list){
        struct Node* temp = list->head;
        while(temp!= NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
int main(){
    struct linked_list list;
    list.head = NULL;
    int elem;
    scanf("%d",&elem);
    while(elem != -1){
        if(elem == -1){
            break;
        }
        else{
            createlist(&list, elem);
        }
        scanf("%d", &elem);
    }
     display(&list);
    
    return 0;
}
