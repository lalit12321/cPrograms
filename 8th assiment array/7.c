#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, s, x=0;
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
    printf("\n Enter An Element you Want to search ");
    scanf("%d",&s);
    printf("\n--------Search Element in an array-----------\n");
     for(int i=0; i<n; i++){
      if(s==a[i])
      x=1;
    }
    if(x==1)
    printf("Element Found Successfully....!");
    else
    printf("Element Not Found....!");

}