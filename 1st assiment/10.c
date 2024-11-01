#include<stdio.h>
int main(){
	int a=5,b=3, sum;
	a = a+b;
	b= a-b;
	a=a-b;
	printf("a=%d, b=%d",a,b);
	
	//wit third variable
	sum = a;
	a= b;
	b=sum;
	printf("a=%d, b=%d",a,b);
	
//	without + -
	a = a*b;
	b= a/b;
	a=a/b;
	printf("a=%d, b=%d",a,b);

 // WITHOUT ARTHMATIC
 	a = a^b;
	b= a^b;
	a=a^b;
	printf("a=%d, b=%d",a,b);
}
