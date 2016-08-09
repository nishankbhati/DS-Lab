#include "poly.h"
#include<stdio.h>

poly create()
{
poly p4;	
	printf("Enter degree of polynomial\n");
	scanf("%d",&p4.n);
	int i;
	for(i=0;i<=p4.n;i++)
		{
		scanf("%d",&p4.arr[i]);	
		}
return p4;

}

poly add(poly poly1,poly poly2)
{
int high,i;
poly poly3;
if (poly1.n>poly2.n)
{high=poly1.n;}
else
{high=poly2.n;}

for(i=0;i<=high;i++)
	{
	poly3.arr[i]=poly1.arr[i]+poly2.arr[i];	
	}
return poly3;
}

void display(poly p4)
{
int i;
printf("The resulting polynomial is:\n");
for(i=0;i<=p4.n;i++)
	{
	printf("%d ",p4.arr[i]);
	}
}
