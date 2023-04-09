#include<stdlib.h>

struct Node{
    int n;
    struct Node* next;
};

struct Node* deleteMinNode(struct Node* head){
    struct Node* p = head;
    struct Node* min = p;
    while(p->next!=NULL){
        if((min->n)>(p->n)){
            min = p;
        }
        p = p->next;
    }
    p = head;
    while(p->next->n!=min->n){
        p = p->next;
    }
    p->next = min->next;
    free(min);
    return head;
}