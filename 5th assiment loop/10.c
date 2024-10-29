#include<stdio.h>
int main(){
    int fact=1, n; float sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("x/%d! + ",i);
        fact *=i;
        sum = sum + (float)1/(float)fact;
    }
    printf("\n sum of all factorial is  %fx.",sum);
}