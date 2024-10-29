#include<stdio.h>
int main(){
    int rem, n=123, s=0, c;
    c=n;
    while(n!=0){
        rem =n%10;
        n /=10;
        s = s*10 + rem;

    }
    printf("%d",s);
}