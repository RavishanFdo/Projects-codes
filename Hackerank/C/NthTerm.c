#include<stdio.h>
#include<string.h>

int S(int x,int t1,int t2,int t3){
	if (x==1){
		return t1;
	}
	else if(x==2){
		return t2;
	}
	else if(x==3){
		return t3;
	}
	else{
		return S(x-1,t1,t2,t3)+S(x-2,t1,t2,t3)+S(x-3,t1,t2,t3);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(n>=1 && n<=20){
		
		if (a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100){
			int result = S(n,a,b,c);
			printf("%d",result);
		}
	}
	return 0;
}
