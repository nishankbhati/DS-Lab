#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "queuefunction.c"


int main(){

	//void create();
	
	struct Q *Q1=(struct Q*)malloc(sizeof(struct Q));
	Q1->front=-1;
	Q1->rear=-1;
	
	//front=-1;
	//rear=-1;
	
	Enqueue(1,Q1);
	Enqueue(5,Q1);
	Enqueue(8,Q1);
	Enqueue(10,Q1);
	Enqueue(35,Q1);
	Dequeue(Q1);
	Dequeue(Q1);
	Enqueue(25,Q1);
	Dequeue(Q1);	

return 0;
}
