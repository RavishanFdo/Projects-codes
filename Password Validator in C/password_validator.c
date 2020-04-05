#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	printf("\n\n");
	printf("------------------------------------------------------------------\n");
	printf("\t\t\tPassword Validator\n");
	printf("------------------------------------------------------------------\n\n");
	printf("Enter your password: ");
	char arr[10];
	gets(arr);
	printf("\n------------------------------------------------------------------\n");
	printf("Entered Password: %s",arr);
	printf("\n------------------------------------------------------------------");
	
	if (strlen(arr)>=5 && strlen(arr)<=10)
	{
		int i;
		int flag;
		int digit;
		for (i=0;i<strlen(arr);i++){
			if (isdigit(arr[i])!=0){				
				flag++;
			}
			else {				
				digit++;
			}
		}
		if (flag>0 && digit<strlen(arr)){
			int flag1=0;
			int k;
			for (k=0;k<strlen(arr);k++){
				if(arr[k]>='A' && arr[k]<='Z'){
					flag1++;
				}
			}
			if (flag1>0){
				int j;
				int flag2=0;
				for (j=0;j<strlen(arr);j++){
					if(arr[j]==' '){
						flag2++;
					}
				}
				if (flag2>0){
					printf("\n\nStatus: Invalid Password -->Error: white space");
				}
				else{
					int a;
					int flag3=0;
					for (a=0;a<strlen(arr);a++){
						if (ispunct(arr[a]))
						{
							flag3++;
						}
					}
					if (flag3>0){
						printf("\n\nStatus: Valid Password");
					}
					else{
						printf("\n\nStatus: Invalid Password -->Error: No special characters");
					}
					
				}
				
			}
			else{
				printf("\n\nStatus: Invalid Password -->Error: no uppercase letter(s)");
			}
			
		}
		else if(digit==strlen(arr)){
			printf("\n\nStatus: Invalid Password -->Error: no digit number(s)");  
		}
	}
	else{
		printf("\n\nStatus: Invalid Password -->Error: password length not suitable");
	}
	printf("\n\n------------------------------------------------------------------");
	printf("\n\n\n\n\n");
	
	return 0;
}
