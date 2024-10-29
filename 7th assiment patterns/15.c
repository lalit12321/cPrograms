#include<stdio.h>
int main(){
    int n, i, ch=49;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch=48;
        for(int j=n-i; j>=1; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            ch++;
        printf("%c",ch);
        
        }
        for(int j=1; j<=i-1; j++){
        ch--;
        printf("%c",ch);
     
        }
        printf("\n");
    }
}