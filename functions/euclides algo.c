/* 
Euclide Algorithm : Greatest Common Divisor

980 / 1617 = 1   1980 – 1 * 1617 = 363
1617 / 363 = 4   1617 – 4 * 363 = 165
363 / 165 = 2   363 – 2 * 165 = 33
5 / 33 = 5       165 – 5 * 33 = 0

so GCR is  33
*/
int euclide(int a,int b){
    if(b<=0) return 1;
    return euclide(b,a%b);
}
#include <stdio.h>
int main(){
    int j=1980,k=1617;
    int n, temp;
    //another method to do the same thing iterativly
    // for(int i =0;temp!=0;i++){
    //     temp = j - (j/k) *k;  // this is nothing but just J % b
    //     j =k;
    //     k = temp;
    // }
}
