#include <stdio.h>

int add(int num1,int num2){
	int add;
	add = num1 + num2;
	return add;
}

int sub(int num1,int num2){
	int  sub;
	sub = num1 - num2;
	return sub;
}

int mul(int num1,int num2){
	int mul;
	mul = num1 * num2;
	return mul;
}

int div(int num1,int num2){
	int   div;
	div= num1 / num2;
	return div;
}

int main(){
	int num1, num2, op, ans;
	
	printf("Enter num 1 :\t");
	scanf("%d",&num1);
	
	printf("Enter num 2 :\t");
	scanf("%d",&num2);
	
	printf("\nCLICK 1 FOR ADD \n CLICK 2 FOR SUB \n CLICK 3 FOR MUL \n CLICK 4 FOR DIV \n ");
	scanf("%d",&op);
	
	if(op==1){
		ans = add(num1,num2);
	}
	
	else if(op==2){
		ans = sub(num1,num2);
	}
	
	else if(op==3){
		ans = mul(num1,num2);
	}
	
	else if(op==4){
		ans = div(num1,num2);
	}
	
	else {
		printf("invaild i/p");
	}
	printf("\nThe Ans is %d", ans);
	return 0;
}