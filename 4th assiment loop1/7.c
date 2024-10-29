#include<stdio.h>
int main(){
    int n, s=0;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf(" number seris: \n");
    for(int i=1; i<=n; i++){
        s = s+i;
        printf("%d ", s-1);
    }
}