## Description: 
total time = 5
time elapsed = 2
character to be filled in it = *
----------
\        /
 \******/ 
  \****/  
   \**/   
    \/    
    /\    
   /  \   
  /    \  
 /******\ 
/********\
----------


#include <stdio.h>
int hourglass(int total, int elaps, char var){
    // i and j are the loops
    int i,j;
    //x and y are left line limits
    int x = 2*total ,y =-1;
    for(i=0;i<2*total+2;i++){
        for(j=0;j<2*total;j++){
        
            if(j==y){
                printf("\\");//for respecctive signs
                
            }else if(j==x){//for respecctive signs
                printf("/");
                
            }else if(i== 2*total+1||i==0){//the top and bottom closing
                printf("-");
            }else if((i<=total &&  j>y && j<x) && i>= elaps){// elapsed upper
                printf("%c", var);
            }else if((i>total &&  j<y && j>x) && i> 2* total - elaps){//elapsed lower 
                printf("%c",var);
            }else{
                printf(" ");
            }
        }//end j loop
        y++;
        x--;
        printf("\n");
    }//end i loop
}//end hourglass
int main() {
    int total = 10;
    int elaps = 10;
    char var = '*';
    
    printf("Here is the hourglass, you just need to enter the \ntotal time\ntime elapsed\ncharacter to be filled in it\n");
    scanf("%d %d %c", &total,&elaps, &var);
    hourglass(total,elaps,var);
}//end main
