#include<stdio.h>
int main(){
    int n;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf("even number seris: \n");
    for(int i=1; i<=n; i++){
        if(i%2==0)
        printf("%d ", i);
    }
}