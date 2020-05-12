#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=1000){
		int i;
		int k=2*n-1;
		for (i=1;i<=k;i++){
			int j;
			
			for(j=1;j<=k;j++){
				
				printf("%d ",n+i-j);
			
			}
			printf("\n");
		}
	}
	return 0;
}
