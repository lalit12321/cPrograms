#include<stdio.h>
#define MAX_SIZE 100
int main(){

    //intialize array
    int arr[MAX_SIZE][MAX_SIZE], row, column , k=1;

    // User Input for Rows and Cloumns
    printf("Enter Row & Column: ");
    scanf("%d%d", &row, &column);

    //Input matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("Enter %d element of array : ", k);
            scanf("%d",&arr[i][j]);
            k++;
        }
    }

    printf("\n---------array---------\n");
      //print matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}