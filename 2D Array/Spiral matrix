#include <stdio.h>
// int output(int arr[100][100],int n){
//     int i ,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(arr[i][j] < 10){
//                 printf(" %d ", arr[i][j]);
//             }else{
//                 printf("%d ", arr[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return arr;
// }//end output
int spiral(int arr[100][100], int n){
    int i,j;
    int count=1;
    int c=1;
    int r=1;
    int a = (n-1)/2;
    int b = (n-1)/2;
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
            arr[a][b] = count;
            count++;
            b++;
        }
        c++;
        
        for(j=0;j<r;j++){
            arr[a][b] = count;
            count++;
            a--;
        }
        
        r++;
        for(j=0;j<c;j++){
            arr[a][b] = count;
            count++;
            b--;
        }
        c++;
        for(j=0;j<r;j++){
            arr[a][b] = count;
            count++;
            a++;
        }
        r++;
    }//end i loop
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] < 10){
                printf(" %d ", arr[i][j]);
            }else{
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return arr;
}//end spiral
int main() {
    int n=5;
    printf("Enter value of n = ");
    scanf("%d" ,&n);
    
    int arr[100][100] = {0};
    
    spiral(arr,n);
    // output(arr,n);
}//end main






