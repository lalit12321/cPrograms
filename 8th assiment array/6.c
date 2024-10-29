#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, sum=0;
    float avg;
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
    avg = sum/n;
    printf("\n--------Average of  array elements-----------\n");
     printf("Total Average of all array elements: %f",avg);
}