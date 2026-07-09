#include <stdio.h>
int main()
{
   int i, a, b, c;
   
   printf("Enter number to guess: ");
   scanf("%d",&a);
 
   
   for(i=1;i<=5;i++){
       printf("Enter guess %d: ",i);
       scanf("%d",&b);
           
           if(a==b){
           printf("\nCongratulations !!! Your guess is correct");
           break;
       }
       if(a > b){
    c = a - b;
       } 
      
       else{
           c = b - a;
           
           }
           
        if(c<=3){
           printf("Too close\n\n");
           continue;
       }
       else if(c<=9){
           printf("Almost there\n\n");
           continue;
       }
       
       else if(b<a){
           printf("Too small\n\n");
           continue;
       }
       
       else if(b>a){
           printf("Too big\n\n");
           continue;
       }

       
   }
   if(i>5){
       printf("Correct guess was: %d",a);
       printf("\nBetter luck next time.");
   }
   
   
   return 0;

}


    
