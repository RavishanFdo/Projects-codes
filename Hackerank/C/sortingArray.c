#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=50){
		int i;
		char arr[n][2500];
		
		for(i=0;i<n;i++){
			scanf("%s",&arr[i][2500]);
		}
		for(i=0;i<n;i++){
			printf("%s",arr[i][2500]);
		}
		
			
		
		
		
	}
	
	
	return 0;
}




