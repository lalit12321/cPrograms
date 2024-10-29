#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, sum=0;
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
        sum += a[i];
    }
    //reverce an array
    printf("\n--------sum of  array element-----------\n");
     printf("Sum of all array elements: %d",sum);
}