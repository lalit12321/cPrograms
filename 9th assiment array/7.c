#include<stdio.h>
#define MAX_SIZE 100
int main(){

    //intialize array
    int arr[MAX_SIZE][MAX_SIZE], row, column , k=1, sum=0;

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

    printf("\n---------Sum of all Rows and Columns in Matrix---------\n");
         //Print Matrix Elements
    for(int i=0; i<row; i++){  
           sum=0;
        for(int j=0; j<column; j++){
            sum += arr[i][j];
        }
        printf("\nSum of %d Rows : %d", i+1, sum);
          sum=0; 
        for(int j=0; j<column; j++){
            sum += arr[j][i];
        }
         printf("\nSum of %d Column : %d", i+1, sum);
    }
    return 0;
}