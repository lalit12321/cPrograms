#include<stdio.h>
int main(){
    int n, count=0, rem;
    printf("enter any digites: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        n=n/10;
        count++;
    }
    printf("%d",count);
}