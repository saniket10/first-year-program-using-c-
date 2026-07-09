#include <stdio.h>
int main()
{
int num1,num2,sum,sub,mul,div;
printf("Enter number 1:\t");
scanf("%d",& num1);
printf("Enter number 2:\t");
scanf("%d",& num2);
sum=num1+num2;
printf("Addition of %d & %d is \t %d",num1,num2,sum);
sub=num1-num2;
printf("Substraction of %d & %d is \t %d",num1,num2,sub);
mul=num1*num2;
printf("Multiplication of %d & %d is \t %d",num1,num2,mul);
div=num1/num2;
printf("Division of %d & %d is \t %d",num1,num2,div);
return 0;
}


    