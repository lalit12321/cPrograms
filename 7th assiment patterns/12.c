#include<stdio.h>
int main(){
    int n, i;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
        printf("*");
        }
        for(int j=1; j<=2*i-2; j++){
            printf(" ");
        }
        for(int j=5; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
}