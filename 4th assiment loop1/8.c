#include<stdio.h>
int main(){
    int n, s=0;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf(" number seris: \n");
    for(int i=1; i<=n; i++){
        s = s+i;
        //m = s*i;
        printf("%d ", 2*s-1);
    }
    return 0;
}