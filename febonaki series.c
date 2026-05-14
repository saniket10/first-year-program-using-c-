#include<stdio.h>
int main(){
	int i,a=0,b=1,c,d;
printf("enter the number:");
scanf("%d",&d);

	for(i=1; i<=d; i++){
	
	c=b+a;
	a=b;
		printf("\n%d",b);
	b=c;

	
	
	}
	return 0;
}
