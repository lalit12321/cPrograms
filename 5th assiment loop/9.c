#include<stdio.h>
int main(){
    int fact=1, n; float Esum=0, Osum=0, sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==1){
        printf("%d/%d! - ",i,i);
        fact *=i;
        Esum = Esum + (float)i*i/(float)fact;
        }
        else{
        printf("%d/%d! + ",i,i);
        fact *=i;
        Osum = Osum + (float)i*i/(float)fact;
        }
        sum = Esum-Osum;
    }
    printf("\n sum of all factorial is  %f.",sum);
}