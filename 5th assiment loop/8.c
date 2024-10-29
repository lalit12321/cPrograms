#include<stdio.h>
int main(){
    int fact=1, n; float sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d/%d! + ",i*i,i);
        fact *=i;
        sum = sum + (float)i*i/(float)fact;
    }
    printf("\n sum of all factorial is  %f.",sum);
}