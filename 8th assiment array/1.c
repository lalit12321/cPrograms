#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], n;
    printf("Enter array size: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}