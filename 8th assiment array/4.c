#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, max=0;
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
    printf("\n--------gratest number in an array-----------\n");
     for(int i=0; i<n; i++){
       if(max<a[i])
       max=a[i];
    }
    printf("Gratest NO is : %d", max);
}