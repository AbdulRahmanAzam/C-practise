/*description:
  keep taking input and store it in array until -1 is entered, and then calculate collatzsequence 
from a function using *(DMA and pointers)*  and return it to the 2d array in a main and then print it
*/
#include <stdio.h>
#include <stdlib.h>
void print_2d(int **res,int n){
  for(int i=0; i< n;i++){
        for(int j=0;res[i][j] != 0; j++){
            printf("%d-> ",res[i][j]);
        }
        printf("1 \n");
    }
}

int* collatzSequence(int n){
    int i=0;
    int *arr = (int*)malloc((i+1) * sizeof(int));
    do{
        arr = (int*) realloc(arr,(i+1) * sizeof(int));
        arr[i] = n;
        if(n % 2 == 0)  n /= 2;
        else  n = (3*n) + 1;
        
        
        i++;
    }while(n != 1);
    return arr;
}

int main(){
    int ans,n=-1;
    int *send = (int*)malloc((n+1) * sizeof(int));  // making a dynamic array
    do{
        n++;
        send = (int*)realloc(send,(n+1) * sizeof(int)); //increasing its size as more number is input
        printf("?");
        scanf("%d",&ans);

        // if(ans == -1)  break; // no need for it 
        send[n] = ans;
    }while(ans!=-1);

    int **res = (int**)malloc((n+1) * sizeof(int*));  // it is a dynamic 2D array
    for(int i=0; i< n; i++){
            res[i] = collatzSequence(send[i]); // storing values in it, no need to do single memory because the returned array is already having columns
    }
    print_2d(res,n);
    
}
