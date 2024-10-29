#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE][MAX_SIZE], row, column, sum=0;
    
    // user input Row & Column
    printf("Enter Row & Column: ");
    scanf("%d%d",&row, &column);

    // Input Matrix Elements
    for(int i=0; i<row; i++){
        for (int j = 0; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    // Print Matrix
    printf("-----------MATRIX-----------\n");
        for(int i=0; i<row; i++){
        for(int j = 0; j<column; j++)
        {
            printf("%d",arr[i][j]);
            if(i==j){
            sum +=arr[i][j];}
            if((i+j) == (column-1)){
            sum += arr[i][j];}
        }
        printf("\n");
    }
    printf("\n Sum of all digonals: %d",sum);

    return 0;
}
