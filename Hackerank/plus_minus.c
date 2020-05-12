#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	if (n>0 && n<=100){
		int i;
		for(i=0;i<n;i++){
			int x;
			scanf("%d", &x);
			if (x>=-100 && x<=100){
				arr[i]=x;
			}
		}
		int j;
		int c1=0;
		int c2=0;
		int c3=0;
		for(j=0;j<n;j++){
			if (arr[j] > 0){
				c1 += 1;
			}
			else if (arr[j] < 0){
				c2 += 1;
			}
			else{
				c3 +=1;
			}
		}
		int tot = c1+c2+c3;
		double positive;
		positive = (double)c1/tot;
		double negative;
		negative = (double)c2/tot;
		double zero;
		zero = (double)c3/tot;
		
		printf("%f\n",positive);
		printf("%f\n",negative);
		printf("%f",zero);
	}
	return 0;
}
