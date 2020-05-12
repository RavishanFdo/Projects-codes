#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int i;
	for (i=0;i<n;i++){
		int j;
		for(j=0;j<n;j++){
			int x;
			
			scanf("%d",&x);
			if (x>=-100 && x<=100){
				arr[i][j] = x;
			}
		}
		
	}
	
	int i1;
	int main_diagonal_sum = 0;
	for (i1=0;i1<n;i1++){
		main_diagonal_sum += arr[i1][i1];
	}

	int j1;
	int non_main_diagonal_sum = 0;
	for (j1=n-1;j1>=0;j1--){
		non_main_diagonal_sum += arr[j1][n-1-j1];
	}

	
	int difference=0;
	difference = abs(main_diagonal_sum-non_main_diagonal_sum);
	printf("%d",difference);
	

	
	return 0;
}
