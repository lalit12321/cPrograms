#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n, e=0, o=0;
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
    printf("\n--------even/odd count array-----------\n");
       for(int i=0; i<n; i++){
       if(a[i]%2==0)
       e++;
       else
       o++;
    }
    printf("\nThe total Even Number Of an arryar is : %d", e);
     printf("\nThe total Even Number Of an arryar is : %d", o);
}