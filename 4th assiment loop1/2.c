#include<stdio.h>
int main(){
    int n;
    printf("\n Enter any Number :");
    scanf("%d",&n);
    printf("Natural number in reverse order: \n");
    for(int i=n; i>=1; i--){
        printf("%d ", i);
    }
}