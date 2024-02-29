//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int order_number;
    int quan;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

void enqueue(NodePtr * head, NodePtr* tail, int x, int y){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
    new_node->order_number=x;
    /* Finish queue*/
    if(*head==NULL) *head=new_node;
    else (*tail)->nextPtr=new_node;
    *tail=new_node;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
       int value=t->order_number;
       *head=t->nextPtr;
   if(*head==NULL) *tail==NULL;
       free(t);
       return value;
        }
   printf("Empty queue\n");
   return 0;
}



#endif
