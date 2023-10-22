##Discription:
n = 5; // n is for upper number of stars
        *        
      * | *      
    *   |   *    
  *     |     *  
*-------|-------*
 *      |      * 
  *     |     *  
   *    |    *   
    *   |   *    
     *  |  *     
      * | *      
       *|*       
        *  

#include <stdio.h>
int kite(int n ){
    //i and j are loops
    int i,j;
    // x and y are the limits for i and j loop which is made by arithematic progression
    int x = 1+ (n-1)*3;//for i loop
    int y = 1 +(n-1)*4;//for j loop
    // a and b are for making the stars (magical checking)
    int a = 2*n-2;
    int b = 2*n-2;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(j ==a || j ==b){ // put the limits for stars
                printf("*");
            }else if(j == 2*n-2){ // for making centre  vertical line
                printf("|");
            }else if(i== n-1){//for making centre horizontal line
                printf("-");
            }else{//made for spaces
                printf(" ");
            }
        }//end j loop
        if(i<n-1){//logic that upper half would be 1 star after 1 space
            a-=2;
            b+=2;
        }else{//logic that lower half would be without spaces
            a++;
            b--;
        }
        printf("\n");
    }//end i loop
}//end kite 
int main(){
    int i,j,k;
    int h;
    printf("Enter the value of n = ");
    scanf("%d", &h);
    kite(h);
}//end main
