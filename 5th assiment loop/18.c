#include<stdio.h>
int main(){
    int n, e=0, o=0, rem;
    printf("enter any digites: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        n=n/10;
        if(rem%2==0){
            e++;
        }
        else
        o++;
    }
    printf(" total even/odd number in digits id even= %d, odd=%d",e,o);
}