#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], n, s=0, e; char ch;
    printf("Enter array size: ");
    scanf("%d", &n);
    // input an array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // print array
    printf("\n--------array-----------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    
    //printf("\n--------short array accending order-----------\n");
    for (int i = 0; i < n; i++)
    {
       for(int j=0; j<n; j++){
        if(a[j]<a[i]){
            e=a[j];
            a[j]=a[i];
            a[i]=e;
        }
       }
    }

      printf("\n--------short array accending order-----------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n--------short array decending order-----------\n");
    for (int i = n-1; i >=0; i--)
    {
        printf("%d ", a[i]);
    }
}