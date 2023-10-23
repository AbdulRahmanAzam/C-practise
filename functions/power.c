#include <stdio.h>
int power(int a, int b){

    if(b==0)return 1;//it is the limit for stopping, this 1 returns the value
  
    int s = a * power(a,b-1);// it recalls the function again and again as b is decrementing 
                              //with 'a' multiplicating with itself till b becomes 0
    return s;// returns s doesnt do anything
}//end power

int main(){
    int n;
    int a,b;
    printf(" Enter base = ");
    scanf("%d", &a);
  
    printf("Enter power");
    scanf("%d",&b);
  
    int fact = power(a,b);
  
    printf("%d raised to the power %d is = %d ",a,b ,fact);
}//end main




