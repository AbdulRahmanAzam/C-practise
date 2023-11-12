/*
TOWER OF HANOI is an interesting game as well as interesting problem
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    printf("disk %d  %c to %c\n",n,s,d);
    hanoi(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter no of disks ");
    scanf("%d", &n);
    printf(" TOWER OF HANOI \n\n");
    int ways = pow(2,n)-1;
    printf("No of ways are %d\n\n",ways);
    hanoi(n,'A','B','C');
}
