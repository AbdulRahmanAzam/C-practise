/*
DATE : 12-NOV-2023
MAZE TYPE GAME BUT JUST FINDING WAYS OF GOING  TILL END IN AN OPEN MAZE
  */
//WHEN STARTING FROM 3 TO 1
#include <stdio.h>
int ways(r,c){
    if(r==1&& r==1) return 1;
    int right =0; 
    int down=0;
    if(r==1) right += ways(r,c-1);
    if(c==1) down  += ways(r-1,c);
    if(r>1 && c>1) {
        right += ways(r,c-1);
        down  += ways(r-1,c);
    }
    return right + down;
}
int main(){
    int r,c;
    printf("Enter row and column ");
    scanf("%d %d", &r,&c);
    printf("Total no of ways are %d",ways(r,c));
}
//IF STARTING FROM 1 TO 3
// #include <stdio.h>
// int ways(int cr,int cc,int er, int ec){
//     int right=0;
//     int down =0;
//     if(cr == er && cc == ec) return 1;
//     if(cr == er) right += ways(cr,cc+1,er,ec);
    
//     if(cc == ec)down += ways(cr+1,cc,er,ec);
    
//         if(cr<er && cc<ec){
//         right += ways(cr,cc+1,er,ec);
//         down += ways(cr+1,cc,er,ec);
//     }
//     return right + down;
// }
// int main(){
//     int c,r;
//     printf("Enter total no of column ");
//     scanf(" %d ", &c);
    
//     printf("Enter total no of rows ");
//     scanf(" %d ", &r);
    
//     int sr=1,sc=1;
//     printf("\n\n");
//     printf("Total no of ways are = %d ",ways(sr,sc,r,c));
// }












