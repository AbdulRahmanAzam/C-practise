#include <stdio.h>
int num( int n){
    // it is the limit where recursion stops adn returns n
    if(n==0){
        return n;
    }
    // it calls function again and again till the limit
    int s = n + num(n-1);
    return;// this is only used due to int datatype of function because function will never go to this return due to recursion and upper limit
}//end num
int main(){
    int n=10;
    int sum=0;
    int fact = num(n);
    printf("%d" , fact);
}//end main
