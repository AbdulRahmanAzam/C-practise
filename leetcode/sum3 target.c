## discription:  Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

## Leetcode question 15
#include <stdio.h>

int main() {
    int a,b,c,i,j,k;
    int arr[6]= {-1,0,1,2,-1,-4};
    int n=6;
    int target= 0;
    for(i=0;i<n/2;i++){
        for(j=j;j<n/2;j++){
            for(k=j;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    printf("%d,%d,%d",arr[i],arr[j],arr[k]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
