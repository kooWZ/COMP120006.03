#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//循环链表
struct Node{
    int value;
    struct Node* next;
};


struct Node* InitializeList(struct Node** pHead){
    *pHead = (struct Node*)malloc(sizeof(struct Node));

    if(*pHead != NULL){
        (*pHead)->next = NULL;
        return *pHead;
    } else {
        return NULL;
    }
}


void CreateList(struct Node* pHead){
    struct Node *pInsert, *pMove = pHead;

    pInsert =  (struct Node*)malloc(sizeof(struct Node));
    memset(pInsert, 0, sizeof(struct Node));
    pInsert->next = pHead;
    scanf("%d", &(pInsert->value));

    while(pInsert->value != 0){
        pMove->next = pInsert;
        pMove = pInsert;

        pInsert =  (struct Node*)malloc(sizeof(struct Node));
        memset(pInsert,0,sizeof(struct Node));
        pInsert->next = pHead;
        scanf("%d", &(pInsert->value));
    }
}


struct Node* InsertNode(struct Node* pHead,int id,int n){
    int i=0;
    struct Node *pInsert, *pMove=pHead;

    pInsert = (struct Node*)malloc(sizeof(struct Node));
    memset(pInsert,0,sizeof(struct Node));
    pInsert->value = n;

    while(i==0||pMove!=pHead){
        if(i==id){
            pInsert->next = pMove->next;
            pMove->next = pInsert;
            return pHead;
        } else {
            pMove = pMove->next;
            i++;
        }
    }
    return NULL;
}


struct Node* DelElem(struct Node* pHead,int id){
    int i=0;
    struct Node* pMove = pHead;

    if(id==0){
        while(pMove->next!=pHead){
            pMove = pMove->next;
        }
        pMove->next = pHead->next;
        free(pHead);
        return pMove->next;
    }

    while(i==0||pMove!=pHead){
        if(i==id-1){
            struct Node* pTemp = pMove->next;
            pMove->next = pTemp->next;
            free(pTemp);
            return pHead;
        } else {
            pMove = pMove->next;
            i++;
        }
    }
    return NULL;
}


struct Node* ModifyElem(struct Node* pHead,int id,int n){
    int i=0;
    struct Node* pMove = pHead;

    while(pMove != NULL){
        if(i==id){
            pMove->value = n;
            return pHead;
        } else {
            pMove = pMove->next;
            i++;
        }
    }
    return NULL;
}


int FindElemId(struct Node* pHead,int n){
    int i=0;
    struct Node* pMove = pHead;
    
    while(pMove != NULL){
        if(pMove->value==n){
            return i;
        } else {
            pMove = pMove->next;
            i++;
        }
    }
    return -1;
}
