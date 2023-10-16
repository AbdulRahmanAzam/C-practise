/* Description :
input : n = 7;
ouput : 
1                       1 
1 0                   1 0 
1 0 1               1 0 1 
1 0 1 0           1 0 1 0 
1 0 1 0 1       1 0 1 0 1 
1 0 1 0 1 0   1 0 1 0 1 0 
1 0 1 0 1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0   1 0 1 0 1 0 
1 0 1 0 1       1 0 1 0 1 
1 0 1 0           1 0 1 0 
1 0 1               1 0 1 
1 0                   1 0 
1                       1 
*

*/

include <stdio.h>
int main() {
    int n=7;
    int a,b,c,i,j,k,l=n*2,m=0;
    int num=0;
    for(i=0;i<n*2;i++){//it is outer loop, used for rows
        for(j=1;j<n*2;j++){//it is inner loop used for columns
        
            if(j%2!=0 && j<=n){//if j is before n and j is odd then  print 1 other wise 0 
                num =1;
            }else if(j%2==0 && j<n){
                num=0;
            }else if((i+j)%2==0 && j>n){//here if either i is odd or j is odd then print 1 other wise 0
                num =1;
            }else{
                num=0;
            }
            //here the limit is used for j, whether it is time to print number or space
            if(j<=m || j>=l){
              printf("%d ",num); 
            }else {
                printf("  ");
            }
        }// end j loop
        if(i<n){//it is used for incrementing and decrementing the value of j limits;
            m++;
            l--;
        }else {
            m--;
            l++;
        }
        printf("\n");
    }//end i loop
}//end main
