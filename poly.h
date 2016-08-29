// DSA LAB 1
#include<stdio.h>

struct polynomial{

	int n; //n=degree of polynomial
	int arr[100]; //coefficients of all the values
};

typedef struct polynomial poly;

poly create();	//inputs poly and returns poly

poly add(poly poly1,poly poly2);

void display(poly p4);





