#include<stdio.h>
int main(){
    int m=0, o=1, c, n, sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d ", m);
        c=m+o;
        m=o;
        o=c;
        sum+=m;
    }
    printf("\n Sum of all febbonacci number 1 to %d is %d.",n,sum);

}