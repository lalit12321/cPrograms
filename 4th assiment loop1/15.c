#include<stdio.h>
int main(){
    int n, a=1, b=1,c;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf(" number seris: \n");
    for(int i=1; i<=n; i++){
         
        
        c=a+b;
        a=b;
        b=c;
        printf("%d ", a);
    }
    return 0;
}