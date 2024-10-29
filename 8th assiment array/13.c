#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, i,j,flag=0;
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
    printf("\n--------Pelindrom element in an array-----------\n");
     for( i=0, j=n-1; i < n, j>=0; i++, j--){
       if(a[i]==a[j]){
       flag=1;
       break;
     }
    }
     if(flag == 1)
     printf("array is palindrom..");
     else
     printf("array is not palindron");
}