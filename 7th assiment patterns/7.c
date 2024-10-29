#include<stdio.h>
int main(){
    int n, i;
    int ch=49;

    printf("enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch=49;
        for(int j=1; j<=i; j++){
        printf("%c",ch);
        ch++;
        }
        
        printf("\n");
    }
}