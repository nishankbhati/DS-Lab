#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//FUNCTIONS
void Enqueue(int );
//void IsEmpty();
void Dequeue();
void print();

int A[10]={0},front=-1,rear=-1,N=10;

int main()
{
	Enqueue(1);
	Enqueue(3);
	Enqueue(2);
	Enqueue(5);
	Dequeue();
	Enqueue(8);
	Enqueue(10);
	Enqueue(24);
	Enqueue(7);
	Dequeue();
	Dequeue();
	
	
return 0;
}

void Enqueue(int x)
{
	if((rear+1)%10==front)	//For full list
		{
		printf("List is full\n");
		return;
			}
	else if(front==-1 && rear == -1)
	{
	printf("List is empty\n");
	return;
	}
	  
	else{
		rear=(rear+1)%10;
	}
	
	A[rear]=x;
	
	print(front,rear);

}

void Dequeue()
{
	if(front==-1 && rear == -1)
	{
	printf("List is empty\n");
	return;
	}
	else if (front==rear)
		{
		front=-1;
		rear=-1;
		return;
		}
	
	else{
		front=(front+1)%10;
		return;
	}
	
	
}




/*void IsEmpty()
{
	if(front==-1 && rear == -1)
	{
	printf("List is empty\n");
	return;
	}
	
	else
		return false;
}
*/

void print(int front,int rear)
{
int i;
printf("List is: ");
for(i=front;i<rear;i++)
	{
	printf("%d ",A[i]);	
	}
}






