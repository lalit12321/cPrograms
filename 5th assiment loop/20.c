#include<stdio.h>
int main(){
    int n,s, x=0, rem;
    printf("enter any digites: ");
    scanf("%d",&n);
    printf("enter any number you want to search: ");
    scanf("%d",&s);
    while(n!=0){
        rem = n%10;
        n=n/10;
        if(s==rem){
            x=1;
        }
    }
    if(x==1)
    printf("Number Found Successfully .....!");
    else
    printf("Number Not Found...!");
}