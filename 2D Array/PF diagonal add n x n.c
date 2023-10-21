
## Discription: 
// it is the coordinate of 5x5 matrix
// n =5;
// arr = {
//     {(0,0),(0,1),(0,2),(0,3),(0,4)},
//     {(1,0),(1,1),(1,2),(1,3),(1,4)},
//     {(2,0),(2,1),(2,2),(2,3),(2,4)},
//     {(3,0),(3,1),(3,2),(3,3),(3,4)},
//     {(4,0),(4,1),(4,2),(4,3),(4,4)}
// }

#include <stdio.h>

int matrix(int arr[100][100], int n){
    //b is used to put the value from left to right diagonal
    int a = n+1,b =1;
    //k & l are for limits, a is for input from rigth to left diagonal
    int k=0,l=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){//for left to right
                arr[i][j] += b;
                b++;
            }
            if(i == k && j == l){//for right to left
                arr[i][j] += a; 
                k++;
                a++;
                l--;
            }
        }
    }
    
}//end matrix

//it is used to print the value of the altered array
int output(int arr[100][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] < 10){
                printf(" %d ", arr[i][j]);
            }else{
                printf("%d ", arr[i][j]);    
            }
        }//end j loop
        printf("\n");
    }//end i loop
}//end output

int main() {
    int n=0;
    int arr[100][100] ={0};
    printf("Enter value of n = ");
    scanf("%d",&n);
    matrix(arr,n);//calling matrix function
    output(arr,n);//calling output fucntion
}//end main
