
#include <stdio.h>
int main(){
    int i,j,k,a=0,b=0,c=0;
    int arr[3][2] = {
        {1,2},
        {3,4},
        {5,6},
    } ;
    int ar=3;
    int ac = 2;
    int brr[2][4]= {
        {1,2,3,4},
        {5,6,7,8}
    };
    int br = 2;
    int bc = 4;
    int crr[3][4];
    if(ac!=br){
        printf("Enter correct order of matrix");
        return false;
    }
    for(i=0;i<ar;i++){
        for(j=0;j<bc;j++){
            for(k=0;k<ac;k++){
                crr[i][j] +=  arr[i][k]* brr[k][j];
            }
        }
    }
    for(i=0;i<ar;i++){//printing the resultant array
        for(j=0;j<bc;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
}//end main 
