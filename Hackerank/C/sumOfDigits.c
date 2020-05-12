#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);
	if (n>=10000 && n<= 99999){
		int arr[5];
		int i;
		for(i=4;i>=0;i--){
			arr[i] = n%10;
			n = n/10;
		}
        int sum=0;
        int j;
        for(j=0;j<5;j++){
        	sum +=arr[j];
		}
		printf("%d",sum);
	}
}
