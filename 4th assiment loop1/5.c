#include<stdio.h>
int main(){
    int n;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf(" number seris: \n");
    for(int i=1; i<=n; i++){
        
        printf("%d ", i*i);
    }
}