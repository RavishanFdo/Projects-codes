#include<stdio.h>
#include<stdlib.h>
int main(){
	//creating n size dynamic array
	int n;
	int sum=0;
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
	int j;
	for(j=0;j<n;j++){
		sum += *(arr+j);
	}
	printf("\n%d",sum);
	
	free(arr);
	
	return 0;
}
