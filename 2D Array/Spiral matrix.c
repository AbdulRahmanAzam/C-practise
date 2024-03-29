
#include <stdio.h>
// it is function of output which prints a 2d Array in a sequence
int output(int arr[100][100],int n){
    // i and j are looop variables
    int i ,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] < 10){// it is to maintain correct spaces
                printf(" %d ", arr[i][j]);
            }else{
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return arr;
}//end output

int spiralin(int arr[100][100], int n){
    // i and j are outer and inner loops
    int i,j;
    // count is incrementing after everytime it is been used
    int count=1;
    // r and c in which in every whole row or column that particular will increment 
    int c=1;
    int r=1;
    // a and b are the position of row and column or(array)
    int a = (n-1)/2;
    int b = (n-1)/2;
    for(i=0;i <n;i++){
        // for RIGHT
        for(j=0;j<c && count <= n*n;j++){
            arr[a][b] = count;
            count++;
            b++;
        }
        c++;
        //for UP
        for(j=0;j<r && count <= n*n;j++){
            arr[a][b] = count;
            count++;
            a--;
        }
        r++;
        // for LEFT
        for(j=0;j<c && count <= n*n;j++){
            arr[a][b] = count;
            count++;
            b--;
        }
        c++;
        //for DOWN
        for(j=0;j<r && count <= n*n;j++){
            arr[a][b] = count;
            count++;
            a++;
        }
        r++;
    }//end i loop
}//end spiral in


int spiralout(int arr[100][100], int n){
    // i and j are outer and inner loops
    int i,j=0;
    // count is incrementing after everytime it is been used
    int count=1;
    // r and c in which in every whole row or column that particular will decrement
    int c=n;
    int r=n-1;
    // a and b are the position of row and column or(array)
    int a = 0;
    int b = 0;
    for(i=0; count <= n*n && i<5;i++){
        //RIGHT
        for(j=0;j<c;j++){
            arr[a][b] = count++;
            b++;
        }
        c--;
        b--;
        //DOWN
        for(j=0;j<r;j++){
            a++;
            arr[a][b] = count++;
        }
        r--;
        //LEFT
        for(j=0;j<c;j++){
            b--;
            arr[a][b] = count++;
        }
        c--;
        //UP
        for(j=0;j<r;j++){
            a--;
            arr[a][b] = count++;
        }
        b++;
        r--;
    }//end i loop
}//end spiral out
// it is the main funciton
int main() {
    int n;
    printf("Enter value of n = ");
    scanf("%d" ,&n);
    
    int arr[100][100] = {0};
    
    spiralin(arr,n);
    output(arr,n);
    printf("\n");
    spiralout(arr,n);
    output(arr,n);
}//end main
