#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
/*
int x;
enqueue( &headPtr, &tailPtr, 5);
enqueue( &headPtr, &tailPtr, 6);
enqueue( &headPtr, &tailPtr, 7);

x=dequeue(&headPtr,&tailPtr);
printf("%d\n",x);

x=dequeue(&headPtr,&tailPtr);
printf("%d\n",x);

x=dequeue(&headPtr,&tailPtr);
printf("%d\n",x);
*/

/* For struct Queue */
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x, count = 1;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
          if(q.size!=0){
            printf("Customer number : %d\n",count);
            count++;
            x=dequeue_struct(&q);
            }
          else dequeue_struct(&q);
        }
        else {
      enqueue_struct( &q, atoi(argv[i]), atoi(argv[i+1]));
      printf("My order is %d\n", atoi(argv[i]));
      i++;
        }
 }
 printf("===========================================\n");
 printf("There are %d people left in queue.\n", q.size);
  return 0;
}