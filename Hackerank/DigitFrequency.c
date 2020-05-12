#include<stdio.h>
#include<string.h>
int main(){
	char num[1000];
	scanf("%s",&num);
	int n;
	n = strlen(num);
	if (n>=1 && n<=1000){
		int i;
		int c0=0;
		int c1=0;
		int c2=0;
		int c3=0;
		int c4=0;
		int c5=0;
		int c6=0;
		int c7=0;
		int c8=0;
		int c9=0;
		
		for(i=0;i<n;i++){
					if (isdigit(num[i])){
						switch(num[i]){
							case '0':{
								c0 += 1;
								break;
							}
							case '1':{
								c1 += 1;
								break;
							}
							case '2':{
								c2 += 1;
								break;
							}
							case '3':{
								c3 += 1;
								break;
							}
							case '4':{
								c4 += 1;
								break;
							}
							case '5':{
								c5 += 1;
								break;
							}
							case '6':{
								c6 += 1;
								break;
							}
							case '7':{
								c7 += 1;
								break;
							}
							case '8':{
								c8 += 1;
								break;
							}
							case '9':{
								c9 += 1;
								break;
							}
						}
					}
					
				
			
		}
		printf("%d %d %d %d %d %d %d %d %d %d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
	
		
	}
	return 0;
}
