#include<stdio.h>
#include<stdlib.h>
#include "linkfunction.c"

int main()

{
	head=NULL;
	int num,flag,pos;  //num=data part pos=position
	//Initialize();
	
	do
	{
	printf("Enter 1 for continue\n");
	scanf("%d",&flag);
	printf("Enter the number yo want to insert \n");
	scanf("%d",&num);
	pos=Index_finder(num);
	Inserts(num,pos);
	}while(flag==1);
	
	print();

return 0;
}
