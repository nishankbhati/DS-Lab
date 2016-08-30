// This File contains functionality of all the functions
#include "queue.h"

/*void create()
{

}

*/
void Enqueue(int x, struct Q* Q1){
	
	if ((Q1->rear+1)%10==Q1->front)	//Queue is full
		{
		printf("Queue is full\n");
		return;
		}
		
	else if(Q1->front==-1 && Q1->rear ==-1) //If queue is empty
		{
		Q1->front=0;
		Q1->rear=0;
		}
	
	else{
		Q1->rear=(Q1->rear+1)%10;
	}
	
	Q1->A[Q1->rear]=x;
	
	print(Q1);
}

void Dequeue(struct Q* Q1){
	if(Q1->front==-1 && Q1->rear ==-1) //If queue is empty
		{
		printf("Queue is Empty, operation failed\n");
		}
		
	else if(Q1->front==Q1->rear){		//Queue
		Q1->front=-1;
		Q1->rear=-1;
	}
	
	else{
		Q1->front= (Q1->front+1)%10;
	}
	print(Q1);
	
}


void print(struct Q* Q1){
	int i;
	printf("List is: ");
	for(i=Q1->front;i<=Q1->rear;i++)
		{
		printf("%d ",Q1->A[i]);
		}
	printf("\n");

}


