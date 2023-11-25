#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 3
void print_board(char board[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%c ",board[i][j]);
        }
    }
}
bool check(char board[SIZE][SIZE]){
    int a=0;
    for(int i=0;i<9;i++){
        if(board[i] == 'X' || board[i] == 'O'){
           a++; 
        }
    }
    if(a==9) return 0;
    return 1;
}
char winner(char board[SIZE][SIZE]){
    if(board[0] == board[1] && board[1] == board[2]) return board[0];
    if(board[3] == board[4] && board[4] == board[5]) return board[3];  
    if(board[6] == board[7] && board[7] == board[8]) return board[6]; 
    
    if(board[0] == board[3] && board[3] == board[6]) return board[0]; 
    if(board[1] == board[4] && board[4] == board[7]) return board[1]; 
    if(board[2] == board[5] && board[5] == board[8]) return board[2]; 
    
    if(board[0] == board[4] && board[4] == board[8]) return board[0]; 
    if(board[2] == board[4] && board[4] == board[6]) return board[6]; 
    
    return 0;
    
}
bool posVal(char board[SIZE][SIZE], int n){
    if(board[n-1]!='O' && board[n-1] != 'X') return 1;
    return 0;
}
void multiplayer(char board[SIZE][SIZE]){
    int player =1;
    int pos;
    do{
        print_board(board);
        printf("Turn of player %d, Enter position ",player);
        scanf("%d",&pos);
        
        if(posVal(board,pos)){
            if(player==1){
                board[pos-1] = 'X';
                player++;
            }else{
                board[pos-1] = 'O';
                player--;
            }
             
        }else{
            printf("Enter position again \n");
        }
        if(winner(board)!=0) {
            printf("Winner is %c\n", winner(board));
            return;
        }
    }while(check(board));
    printf("Game Draw \n");
    return;
}

void hard(char board[SIZE][SIZE]){
    int player =1;
    int pos;
    do{
        if(player ==1){
            printf("Enter position ");
            scanf("%d", &pos);
            player++;
        }else{
            pos = computer(board);
            player--;
        }
        if(posVal(board,pos)){
            
        }else{
            printf("Enter position again \n");
        }
    }while(1);
}
int main(){
    int difficulty_level; // 
    int game_mode; // to play single or multiplayer 
    int conti; //to continue
    do{
        char board[SIZE][SIZE] = {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };
        
        printf("Wanted to play  multiplayer or single \n Enter 1 for multiplayer and 0 for single ");
        scanf("%d",&game);    
        
        if(game){
            printf("X is for player 1 and O is for player 2\n");
            multiplayer(board);
        }else{
            printf("Do you want to play easy or hard\n\nEnter 1 for Easy and 0 for Hard\n");
            scanf("%d",&difficulty_level);
            if(difficulty_level){
                
            }else{
                hard(board);
            }
        }
        print_board(board);
        
        printf("Do you want to play again, Enter 1 to continue \n");
        
    }while();
    
}
