#include <stdio.h>
#include <string.h>
int main()
{
int  pin1,pin2,pin3,pin4,pin5,pin6,pin7,pin8,pin9,pin10,
     amt,b, c, d, e, f, g, h, i, j, k, l, m, n,
     atm1,atm2,atm3,atm4,atm5,atm6,atm7,atm8,atm9,atm10;
char name1[20] = "piyush";
char name2 [20] = "om";
char name3 [20] = "dnyneshwar";
char name10[20];
char name4 [20] = "saniket";
char name5 [20] = "nishan";
char name6 [20] = "aaryan";
char name7 [20] = "aarya";
char name8 [20] = "diksha";
char name9 [20] = "ridhi";
printf("Enter the name:\t");
scanf("%s",name10);
if((strcmp(name1,name10)==0 ||
   strcmp(name2,name10)==0 ||
   strcmp(name3,name10)==0 ||
   strcmp(name3,name10)==0 ||
   strcmp(name4,name10)==0 ||
   strcmp(name5,name10)==0 ||
   strcmp(name6,name10)==0 ||
   strcmp(name7,name10)==0 ||
   strcmp(name8,name10)==0 ||
   strcmp(name9,name10)==0)) {
   printf("The name is valid:\n");
   printf("Processing...");
   }
   else{ 
   printf("wrong user name \n");
   printf(" try again");
   }
   ;
    printf("\nEnter the unique pin:\t");
   scanf("%d",&pin10);
   pin1= 1804;
   pin2= 2704;
   pin3= 0204;
   pin4= 1010;
   pin5= 1012;
   pin6= 1013;
   pin7= 1803;
   pin8= 1111;
   pin9= 1212;
   if ((strcmp(name10,name1)==0 && pin10==pin1 ||
        strcmp(name10,name2)==0 && pin10==pin3 ||
        strcmp(name10,name3)==0 && pin10==pin4 ||
        strcmp(name10,name4)==0 && pin10==pin6 ||
        strcmp(name10,name5)==0 && pin10==pin5 ||
        strcmp(name10,name6)==0 && pin10==pin6 ||
        strcmp(name10,name7)==0 && pin10==pin7 ||
        strcmp(name10,name8)==0 && pin10==pin8 ||
        strcmp(name10,name9)==0 && pin10==pin9)){
        
      printf("processing");
      }
   else {  
    printf("invalid pin");
    printf("/ntry again");
}
   printf("\nEnter the amount:\t");
   scanf("%d",&amt);  
b=amt/1000;  
c=amt%1000;  
printf("total 1000 notes : %d",b);  
d=c/500;  
e=c%500;  
printf("\ntotal 500 notes: %d",d);  
f=e/100;  
g=e%100;  
printf("\ntotal 100 notes : %d",f);  
h=g/20;  
i=g%20;  
printf("\ntotal 20 notes : %d",h);  
j=i/10;  
k=i%10;  
printf("\ntotal 10 notes: %d",j);  
l=k/2;  
m=k%2;  
printf("\ntotal 2 coins : %d",l);  
n=m/1;  
printf("\ntotal 1 coins : %d",n);
printf("\nEnter the Atm pin "); 
scanf("%d",&atm10);
atm1 = 1111;
atm2 = 2222;
atm3 = 3333;
atm4 = 4444;
atm5 = 5555;
atm6 = 6666;
atm7 = 7777;
atm8 = 8888;
atm9 = 9999;
if ((strcmp(name10,name1)==0 && pin10==pin1 && atm10==atm1 ||
        strcmp(name10,name2)==0 && pin10==pin3 && atm10==atm2 ||
        strcmp(name10,name3)==0 && pin10==pin4 && atm10==atm1 ||
        strcmp(name10,name4)==0 && pin10==pin2 && atm10==atm1 ||
        strcmp(name10,name5)==0 && pin10==pin5 && atm10==atm1 ||
        strcmp(name10,name6)==0 && pin10==pin6 && atm10==atm1 ||
        strcmp(name10,name7)==0 && pin10==pin7 && atm10==atm1 ||
        strcmp(name10,name8)==0 && pin10==pin8 && atm10==atm1 ||
        strcmp(name10,name9)==0 && pin10==pin9 && atm10==atm1)) 
        {
        printf("Processing");
        printf("\nGet your amount");
        }
 else {
        printf("Invalid pin ");
        printf("Enter valid pin ");
        }
return 0;
}
