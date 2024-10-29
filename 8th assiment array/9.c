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
    printf("\n--------Print Table of array-----------\n");
     for(int i=0; i<n; i++){
        for(int k=1; k<=10; k++){
        printf("%d ",a[i]*k);
        }
        printf("\n");
    }
}