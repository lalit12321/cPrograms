#include<stdio.h>
#define MAX_SIZE 100
int main(){

    //intialize array
    int arr[MAX_SIZE][MAX_SIZE], row, column ,k=1, arrB[MAX_SIZE][MAX_SIZE], arrC[MAX_SIZE][MAX_SIZE];

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
     //Input Matrix Elements
     k=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("Enter %d element of Secound array : ", k);
            scanf("%d",&arrB[i][j]);
            k++;
        }
    }

    printf("\n---------First Matrix---------\n");
      //Print Matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n---------Secound Matrix---------\n");
      //Print Matrix Elements
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",arrB[i][j]);
        }
        printf("\n");
    }

    printf("\n---------Sum of two Matrix---------\n");
         //Print Matrix Elements
    for(int i=0; i<row; i++){        
        for(int j=0; j<column; j++){
          arrC[i][j] += arr[i][j]+arrB[i][j];
          printf("%d ",arrC[i][j]);
        }
        printf("\n");
    }
    return 0;
}