#include <stdio.h>
#include <stdbool.h>
int main(){
    int n =50;
    int nhalf = (n-1)/2; //it is used because later it will provide double the limit, suppose n - 10 then it will give till n = 20
    bool arr[nhalf+1];
    for(int i=0;i<=nhalf;i++){
        arr[i] = false;
    }
    // THIS IS WHAT IT IS, TYPE OF HARD
    for(int i=1;i<=nhalf;i++){
        for(int j=i;(i + j +2 * i* j)<=nhalf;j++){
            arr[i + j +2 * i* j] = true;
            
        }
    }
    for(int i=1;i<=nhalf;i++){
        if(arr[i]==false) printf(" %d ", 2* i +1);
    }
}
