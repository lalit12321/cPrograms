#include<stdio.h>
int main(){
	int n,r;
	printf("enter numbe: ");
	scanf("%d", &n);
	r=n%10;
	n=n/10;
	printf("%d",r);
	r=n%10;
	n=n/10;
	printf("%d%d",r,n);
}
