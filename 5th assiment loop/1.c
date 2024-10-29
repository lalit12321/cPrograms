#include<stdio.h>
int main(){
    int sum=0, n;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    printf("Sum of all natural number 1 to %d is %d.",n,sum);
}