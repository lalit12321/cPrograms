#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n;
    printf("Enter array size: ");
    scanf("%d",&n);
    //input an array
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //print array
    printf("\n--------array-----------\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    //reverce an array
    printf("\n--------reversed array-----------\n");
     for(int i=n-1; i>=0; i--){
        printf("%d ",a[i]);
    }
}