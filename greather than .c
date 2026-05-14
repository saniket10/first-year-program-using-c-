#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter first number:\t");
    scanf("%d",&num1);
    printf("Enter second number\t");
    scanf("%d",&num2);
    if(num1>num2){
    printf("Greater number is this %d",num1);
    }
     else if (num1<num2){
    printf("Greater number is this %d",num2);
    }
    else if (num1=num2){
    printf("Both are equal ");
    }
   
     return 0;
}
