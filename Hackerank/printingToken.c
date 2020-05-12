#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	gets(a);
	if (strlen(a)>=1 && strlen(a)<=1000){
		char *p;
		p = strtok(a," ");
		while(p!=NULL){
			printf("%s\n",p);
			p = strtok(NULL," ");
		}
	}
	
	
	return 0;
}
