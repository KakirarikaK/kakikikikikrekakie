typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;

void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->order_number=x;
  new_node->quan=y;
  new_node->nextPtr=NULL;
  if(q->size==0) q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
 }
}

int dequeue_struct(Queue *q){
   NodePtr t = q->headPtr;
   if(t){
     int value = t->order_number;
     q->headPtr = t->nextPtr;
       if(q->size==1) q->tailPtr=NULL;
     q->size--;
     int price;
     int nofood = 0;
     switch (value)
     {
      case 1: printf("Ramen\n"); price = 100*t->quan; break;
      case 2: printf("Som tum\n"); price = 20*t->quan; break;
      case 3: printf("Fried chicken\n"); price = 50*t->quan; break;
      default: nofood = 1; printf("no food\n");
     }
     if (nofood == 0)
     {
      switch (value)
      {
        case 1: printf("You have to pay %d\n", price); break;
        case 2: printf("You have to pay %d\n", price); break;
        case 3: printf("You have to pay %d\n", price); break;
      }
        int cash = 0;
        while(cash < price){
          printf(":cash: ");
          scanf("%d",&cash);
        }
        printf("Thank you\n");
        if(cash>price) {
          printf("Change is : %d\n", cash-price);
        }
     }
      // printf("Thank you\n");
      // if (cash > price)
      //   printf("change is %d\n", cash - price);
     free(t);
     return value;
  }
  else
    printf("empty queue\n");
   return 0;
}
