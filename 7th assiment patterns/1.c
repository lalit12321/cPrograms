#include<stdio.h>
int main(){
    int n, i;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        printf("*");
        }
        printf("\n");
    }
}