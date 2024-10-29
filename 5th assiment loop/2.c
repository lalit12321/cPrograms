#include<stdio.h>
int main(){
    int m=1, n, p;
    printf("\n Enter any number : ");
    scanf("%d",&n);
    printf("\n Enter power : ");
     scanf("%d",&p);
    for(int i=1; i<=p; i++){
        m = m*n;
    }
    printf("the number is %d.",m);
}