#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>0){
		printf("Positive");
	}else if(a<0){
		printf("Neagtive");
	}else{
		printf("Zero");
	}
	return 0;
}
