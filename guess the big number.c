#include<stdio.h>
int main()
{
	 int a, b, c;
	 printf("enter a:\t");
	 scanf("%d",&a);
	 
	 printf("enter b:\t");
	 scanf("%d",&b);
	 
	 printf("enter c:\t");
	 scanf("%d",&c);
	 
	 
	 
	if (a>b && a>c){
		printf("%d is bigger",a);
	}
	else if (b>c && b>a) {
	 	printf("%d is bigger",b);
	
	 }
	 else 
	 printf("%d is bigger",c);

	 return 0;
	 
}