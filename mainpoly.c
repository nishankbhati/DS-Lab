#include "poly.c"
#include<stdio.h>

int main()
{
	poly poly1,poly2,poly3;
	
	poly1=create();
	poly2=create();
	
	poly3=add(poly1, poly2 );
	
	display(poly3);

}

