#include<stdio.h>
#include<math.h>
int main(){
    int fact=1, x,n; float po, Esum=0, Osum=0, sum=0;
    printf("\n Enter any Natural number : ");
    scanf("%d",&n);
    printf("\n Enter any Natural number : ");
    scanf("%d",&x);
    for(int i=1; i<=n; i++){
        if(i%2==1){
        printf("x/%d! - ",i);
        fact *=i;
        po = pow(x, fact);
        Esum = Esum + po;
        }
        else{
        printf("x/%d! + ",i);
        fact *=i;
        po = pow(x, fact);
        Osum = Osum + po;
        }
        sum = Esum-Osum;
    }
    printf("\n sum of all factorial is  %f.",sum);
}