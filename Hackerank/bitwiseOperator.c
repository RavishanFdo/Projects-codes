#include<stdio.h>

void main(){
	int n,k;
	scanf("%d %d",&n,&k);
	//printf("%d %d",n,k);
	if(n>=2 && n<=10^2){
		if(k>=2 && k<=n){
			int a,b;
			int c1=0;
			int c2=0;
			int c3=0;
			for (a=1;a<=4;a++){
				for(b=a+1;b<=5;b++){
					
					if(a&b < k){
						c1 +=1;
					}
					
					else if(a|b < k){
						c2 +=1;
					}
					
					else if(a^ b < k){
						c3 +=1;
					}
				}
			}
			printf ("%d\n%d\n%d",c1,c2,c3);
		}
	}

}
