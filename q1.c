#include<stdio.h>
void jenish(int n){
n=n*n*n;
printf("%d",n);
}
void main(){
	int i;
	printf("Enter any number:");
	scanf("%d",&i);
	jenish(i);
	
}
