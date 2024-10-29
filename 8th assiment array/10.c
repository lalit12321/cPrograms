#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], n, s, e; char ch;
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

     printf("\n You Want to insert an element (Y/N): ");
     ch = getche();
    while (ch == 'y' || ch == 'Y')
    {
        n++;
           printf("\n Enter Position You Want to insert an element: ");
           scanf("%d", &s);
            printf("\n Enter Element You Want to insert an element: ");
           scanf("%d", &e);
        for (int i = n-1; i>=s; i--)
        {
            a[i]=a[i-1];
            a[s-1]=e;
        }
         printf("\n You Want to insert an element (Y/N): ");
         ch = getche();
    }

    printf("\n--------Insert an element in an array -----------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}