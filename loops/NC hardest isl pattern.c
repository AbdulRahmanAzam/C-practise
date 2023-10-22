#include <stdio.h>
int sona(int n){
    int i,j,k;
    
    int a = 1 + (n-1) * 4;
    int b = 1 +(n-1) * 6;
    
    int x = 1 +(n-1) *2;
    int y = 1 +(n-1) *2;
    // printf("%d",x);
    
    for(i=0;i<b;i++){
        for(j=1;j<=a;j++){
            if(j== x|| j==y){
                printf("*");
            }else if(j == x+1 || j== y-1){
                printf("_");
            }else if((i >=n && i <=n+5) && (j ==1 || j==a )){
                printf("*");
            }else{
                printf(" ");
            }        
        }//end j loop
        if(i<n){
            x+=2;
            y-=2;
        }else if(i > n+5){
            x-=2;
            y+=2;
        }
        printf("\n");
    }//end i loop
}//end sona
int main(){
    int a,b,c;
    
    int n=5;
    sona(n);
}//end main
