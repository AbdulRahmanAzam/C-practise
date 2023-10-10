# check

Q1----------------------------------------------------------------------------
/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: divide two number without using diviser operator
*/
#include <stdio.h>
int main(){
    int a,b,c=0,i,j,k;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d", &b);
    
    while(a>0){
        a = a -b;
        c++;
    }
    printf("%d",c );
}

Q2--------------------------------------------------------------------------
