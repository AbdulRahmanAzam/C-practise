/* 
Algorithm : Greatest Common Divisor

980 / 1617 = 1   1980 – 1 * 1617 = 363
1617 / 363 = 4   1617 – 4 * 363 = 165
363 / 165 = 2   363 – 2 * 165 = 33
5 / 33 = 5       165 – 5 * 33 = 0

so GCR is  33
*/

#include <stdio.h>
int main(){
    int j=1980,k=1617;
    int n, temp;
    for(int i =0;temp!=0;i++){
        temp = j - (j/k) *k;
        j =k;
        k = temp;
    }
    printf("%d", j);
}
