#include<stdio.h>
#define SIZE 100
int main(){
	int m, n, i, j,k,l ,a[SIZE][SIZE];
	printf("Enter Size of arry: like 3x3 :");
	scanf("%d%d",&m,&n);
	for(i=0; i<m; i++){
		for( j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n\n");
	for( i=0; i<m; i++){
		for( j=0; j<n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	int minor[SIZE][SIZE], suba[SIZE][SIZE], si, sj;
	for( i=0; i<m; i++){
		for( j=0; j<n; j++){
			si=0;
			for(k=0; k<m; k++){
				if(k==i)
				continue;
				sj=0;
				for(l=0; l<n; l++){
					if(l==j)
					continue;
					
					suba[si][sj] = a[k][l];
					sj++;
				}
			si++;	
			}
			int minors = (suba[0][0]*suba[1][1])-(suba[0][1]*suba[1][0]);
			minor[i][j] = minors;
		}
		
	}
	
	
	printf("\n\n\n");
	for( i=0; i<m; i++){
		for( j=0; j<n; j++){
			printf("%d ",minor[i][j]);
		}
		printf("\n");
	}
	
	
}
