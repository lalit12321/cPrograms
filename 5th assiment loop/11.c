#include<stdio.h>
int main(){
    int fact=1, n; float Esum=0, Osum=0, sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==1){
        printf("x/%d! - ",i);
        fact *=i;
        Esum = Esum + (float)1/(float)fact;
        }
        else{
        printf("x/%d! + ",i);
        fact *=i;
        Osum = Osum + (float)1/(float)fact;
        }
        sum = Esum-Osum;
    }
    printf("\n sum of all factorial is  %fx.",sum);
}