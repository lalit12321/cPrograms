#include<stdio.h>
int main(){
    int n, i, ch=49;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch=49;
        for(int j=n-i; j>=1; j--){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
        printf("%c",ch);
        ch++;
        }
        printf("\n");
    }
}