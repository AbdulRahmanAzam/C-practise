
#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[] = {1,3,5,7,9};
    int brr[] = {2,4,6,8,10,12,14,15};
    
    int len1 = sizeof(arr) / sizeof(arr[0]); 
    int len2 = sizeof(brr) / sizeof(brr[0]);
    
    int size = len1+len2;
    int *res = (int*)malloc(size * sizeof(int));
    
    int i,a,b;
    for(i=0,a=0,b=0; i < len1 && i < len2; i++){
        if(arr[a] < brr[b])  res[i] = arr[a++];
        else if(arr[a] > brr[b])  res[i] = brr[b++];
    }
    while(a < len1)  res[i++] = arr[a++]; 
    while(b < len2)  res[i++] = brr[b++];

    for(int i=0; i < size ;i++) printf("%d  ",res[i]);
}//end main
