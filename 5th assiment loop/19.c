#include<stdio.h>
int main(){
    int n, count=0, rem,rem1, arm=0, m=1, n1,n2, x=0;
    printf("enter any digites: ");
    scanf("%d",&n);
    n2=n1=n;
    while(n!=0){
        rem = n%10;
        n=n/10;
        count++;
    }

        while(n1!=0){
        rem1 = n1%10;
        n1=n1/10;
        m=1;
        for(int i=1; i<=count; i++){
        m= m*rem1; 
        }
     arm += m;
    }
    if(n2==arm)
    x=1;
    if(x==1)
    printf("%d is armstrong number",arm);
    else
     printf("%d is not armstrong number",arm);
}