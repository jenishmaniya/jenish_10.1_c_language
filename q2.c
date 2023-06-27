#include<stdio.h>
void jenish(int n){
	if(n%3==0 && n%5==0){
		printf("This number is divisible by 3 & 5:");
	}else{
		printf("This number is not divisible by 3 & 5:");
	}
}
void main(){
	int i;
	printf("Enter any number:");
	scanf("%d",&i);
	jenish(i);
}
