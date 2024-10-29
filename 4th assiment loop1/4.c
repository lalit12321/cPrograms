#include<stdio.h>
int main(){
    int n;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf("odd number seris: \n");
    for(int i=1; i<=n; i++){
        if(i%2==1)
        printf("%d ", i);
    }
}