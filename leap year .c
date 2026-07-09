#include  <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter year to check leap year:\t");
    scanf("%d",&a);
    
    b=a/4;
    e=a%4;
    c=a/100;
    f=a%100;
    d=a/400;
    g=a%400;
    
    if(e==0 && f!=0 || g==0){
        printf("This year is a leap year");
    }
    else{
        printf("This year is not an leap year");
    }
    
    return 0;
    
    
}

    