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
#include <stdio.h>
int reverse(){
    
}
int input(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return;
}
int main(){
    int a,b,c=0,i,n,j,k,d;
    int arr[100];
    printf("Enter size of an array = ");
    scanf("%d",&n);
    printf("ENter the value of d = ");
    scanf("%d",&d);
    input(arr,n);
    for(j=0;j<d;j++){
      for(i=0;i<n-1;i++){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        } 
    }
    // int arr[7] = {1,2,3,4,5,6,7};
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}
--------------------------------------------------------------------------
