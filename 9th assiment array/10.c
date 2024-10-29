#include<stdio.h>
#define MAX_SIZE 100
int main(){

    //intialize array
    int arr[MAX_SIZE][MAX_SIZE], row, column , k=1, max=0;

    // User Input for Rows and Cloumns
    printf("Enter Row & Column: ");
    scanf("%d%d", &row, &column);

    //Input Matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("Enter %d element of array : ", k);
            scanf("%d",&arr[i][j]);
            k++;
        }
    }

    printf("\n---------Matrix---------\n");
      //Print Matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n--------Find Gratest Number in Each Rows in Matrix---------\n");
         //Print Matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
        printf("\n");
        printf("\n Gratest Number in %d Rows: %d",i+1,max);
    }
    return 0;
}