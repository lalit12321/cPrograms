#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, s;
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

    
     for(int i=0; i<n; i++){
       if(s==a[i]){
         printf("\nElement Found Successfully.....!\n");
         printf("\n Enter An Element you Want to replace ");
         scanf("%d",&a[i]);
       }
    }
    printf("\n--------replace array element-----------\n");
      for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}