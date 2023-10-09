## Discription:
input:  1 2 3 
        4 5 6

output: 1 4
        2 5
        3 6
#include <stdio.h>
int main(){
    int a=0,b=0,c,sum,i,j,k,max,r;
    int arr[100][100];
    int brr[100][100];

    printf("Enter number of rows ");
    scanf("%d", &r);
    printf("Enter number of columns ");
    scanf("%d", &c);
    
    for(a=0;a<r;a++){
        for(b=0;b<c;b++){
            scanf("%d\t",&brr[a][b]);  //input matrix
        }
        printf("\n");
    }
    
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            arr[i][j] = brr[j][i]; // storing matrix to another matrix(making transpose)
        }//end j loop
        printf("\n");
    }
    for(int k=0;k<c;k++){
        for(int l=0;l<r;l++){
            printf("%d ", arr[k][l]); //printing stored matrix which is transpose
        }
        printf("\n");
    }
}//end main
