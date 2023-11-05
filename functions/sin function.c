#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int denom(int n){
    int sum =1;
    for(n;n>0;n--)sum *= n; 
    return sum;
}
double numerator(double end,int i){
    double sum=1;
     for(int j=1;j<=i;j++)sum *= end;  
     return sum;
}
int main(){
    double num=0, x=0,total =0;
    int till=0;
    printf("Number of terms of series ? \n");
    scanf("%d",&till);
    printf("Enter x = ");
    scanf("%lf",&x);
    
    for(int j=1,i=1;j<=till;j++,i+=2){
        num = numerator(x,i)/denom(i);
        if(j%2!=0){
            total +=  num;
        }else{
            total -= num;
        }
    }
    printf("%lf", total);
}
