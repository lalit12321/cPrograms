#include<stdio.h>
#define MAX_SIZE 100
int main(){

    //intialize array
    int arr[MAX_SIZE][MAX_SIZE], row, column ,k=1;

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

    printf("\n---------Check Repeted Number in Matrix---------\n");
         //Print Matrix Elements
    for(int i=0; i<row; i++){        
        for(int j=0; j<column; j++){
          if(arr[i][j]==arr[i][j+1])
          printf("%d ",arr[i][j]);
        }
    }
    return 0;
}