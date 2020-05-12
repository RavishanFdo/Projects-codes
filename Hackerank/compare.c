#include<stdio.h>

int main(){
	int a[3];
	int b[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	scanf("%d %d %d",&b[0],&b[1],&b[2]);
	//printf("%d %d %d",a[0],a[1],a[2]);
	int i;
	int c1=0;
	int c2=0;
	for(i=0;i<3;i++){
		if (a[i]>=1 && a[i]<=100){
			if (b[i]>=1 && b[i]<=100){
				if(a[i]>b[i]){
					c1 +=1;
				}
				else if(a[i]<b[i]){
					c2 +=1;
				}
				else{
					continue;
				}
			}
		}
	}
	printf("%d %d",c1,c2);
	return 0;
}
