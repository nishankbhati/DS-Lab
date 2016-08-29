//This file contains all the functions that inputs sorted array

#include "linkhead.h"

void Inserts(int data, int n)
{
	struct Node *new_Node=(struct Node*)malloc(sizeof(struct Node));
	//struct Node *temp;
	new_Node->data=data;
	new_Node->next=NULL;
	int i;
	if(n==1){
		new_Node->next=head;
		head=new_Node;
		return;
	}
	
	struct Node *temp=head;	//No memory is being allocated to temp 2. It is just used for referencing nodes
	for(i=0;i<n-2;i++){
		temp=temp->next;
	}
	
	new_Node->next=temp->next;
	temp->next=new_Node;


}


/*void Initialize(){
	struct Node *First_Node=(struct Node*)malloc(sizeof(struct Node));
	struct Node *Last_Node=(struct Node*)malloc(sizeof(struct Node));
	First_Node->data=0;
	Last_Node->data=100000;
	head=First_Node;
	First_Node->next=Last_Node;
	Last_Node->next=NULL;
}
*/

int Index_finder(int num)
{
	//struct Node *new_Node=(struct Node*)malloc(sizeof(struct Node));
	struct Node *temp;
	//new_Node->data=num;
	int index=1;
	//temp=head;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		if(num < temp->data)
			index++;
		
		else
			break;
	}
	//new_Node->next=temp->next;
	//temp->next=new_Node;
	
return index;	
}

void print()
{
	struct Node *temp=head;
	printf("LIST IS: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;	
	}
	printf("\n");
}


 
