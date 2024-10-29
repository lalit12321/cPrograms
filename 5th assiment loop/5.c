#include<stdio.h>
int main(){
    int fact=1, n;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    printf("factorial of  %d is %d.",n,fact);
}