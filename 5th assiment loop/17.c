#include<stdio.h>
int main(){
    int n, sum=0, rem;
    printf("enter any digites: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        n=n/10;
        sum += rem;
    }
    printf("Sum of all input digites is %d",sum);
}