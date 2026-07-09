#include<stdio.h>
int main (){
int ogpin,pin1,i;
ogpin = 1106;
for (i=1;i<=3;i++){
printf("Enter the pin:\t");
scanf("%d",&pin1);
if (ogpin!=pin1){
printf("invalid pin");
if(i<3){
printf("\nplease try again\n");
}

continue;
}
 
else {
printf("\nvalid pin ");
printf("\nprocessing...  ");
break;
}
}
if (i>3) {
printf("\nYou are card is suspended for next 24hrs");
}
return 0;
}
    