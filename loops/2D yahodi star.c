/*Enter the value of n 3
      *      
     * *     
* * *   * * *
 *         * 
  *       *  
   *     *   
  *       *  
 *         * 
* * *   * * *
     * *     
      *  
*/
  
#include <stdio.h>
void head(int n){
    int a = 2 + (n-1)*6;
    int b,c;
    b = c = a/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<a;j++){
            if(j == b || j == c){
                printf("*");
            }else if(j%2==1 && i == n && (j <b ||j>c)){
                printf("*");
            }else
                printf(" ");
        }
        printf("\n");
        b--;
        c++;
    }
}
void body(int n){
    int a = 1 + (n-1)*6;
    int b=2,c=a-1;
    
    for(int i=1;i<n*2;i++){
        for(int j=1;j<=a;j++){
           if(j==b || j==c){
               printf("*");
           }else {
               printf(" ");
           }
        }
        if(i<n) {
            b++;
            c--;
        }else {
            b--;
            c++;
        }
        printf("\n");
    }
}
void leg(int n){
    int a = 1 + (n-1)*6;
    int b=1+(n-1)*2,c=1+(n-1)*4;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
           if(j==b || j==c){
               printf("*");
           }else if(j%2==1&& i==1 && (j<=b || j>c)){
               printf("*");
           }else{
               printf(" ");
           }
        }
        b++;
        c--;
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    head(n);
    body(n);
    leg(n);
}
