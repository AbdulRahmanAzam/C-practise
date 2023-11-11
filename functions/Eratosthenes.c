#include <stdio.h>
#include <stdbool.h>
int main(){
    int n=50;
    int arr[n];
    // FILLING ARRAY WITH 1 TO N
    for(int i =2;i<n;i++){
        arr[i] = i;
    } 
    arr[0] = arr[1] = false;
    
    //below is ERATOSTHENES CODE
    for(int i=2;i*i<n;i++){
        if(arr[i]){
            for(int j=i*i;j<n;j+=i){
                arr[j] = false;
            }
        }
    }
    
    //PRINTING ALL THE ELEMENTS IN THE ARRAY
    for(int i=0;i<n;i++){
        if(arr[i]) printf("%d ",arr[i]);
    }
}
