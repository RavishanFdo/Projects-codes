#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	if (n>=1 && n<=1000){
		int i;
		for(i=0;i<n;i++){
			int k;
			scanf("%d",&k);
			if(k>=1 && k<=1000){
				arr[i] = k;
			}
		}
		int arr2[n];
		int j;
		for(j=0;j<n;j++){
			arr2[j] = arr[n-1-j];
		}
		
		for(j=0;j<n;j++){
			printf("%d ",arr2[j]);
		}
		
		
	}
	return 0;
}
