#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};


//假设二者都是从小到大有序，新链表也是从小到大有序

struct Node* integrate(struct Node* head1,struct Node* head2){
    if(head1==NULL){
        return head2;
    } else if(head2 == NULL){
        return head1;
    }

    struct Node *t = NULL;
    if(head1->value < head2->value){
        t = head1;
        t->next = integrate(head1->next,head2);
    } else {
        t = head2;
        t->next = integrate(head2->next,head1);
    }
    return t;
}