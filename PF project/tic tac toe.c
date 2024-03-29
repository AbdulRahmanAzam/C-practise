#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 3

void print_board(char board[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        printf("\n");
        for(int j=0;j<SIZE;j++){
            if(j <SIZE-1) printf(" %c |",board[i][j]);
            else printf(" %c ",board[i][j]);
        }
        printf("\n");
        if(i<SIZE-1)  for(int j=0;j<SIZE;j++)  printf(" -- ");
    }
    printf("\n");
}
bool isBoardFull(char board[SIZE][SIZE]){
    int a=0;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++)  
            if(board[i][j] == 'X' || board[i][j] == 'O')
                a++; 
    }
    if(a==9) return 1;
    return 0;
}
char winner(char board[SIZE][SIZE], char ch){
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i] == ch) return 1;
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]) return 1;
    }
    //for diagonals
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == ch) 
    return 1;
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == ch) 
    return 1;
    
    return 0;
}
bool pos_Validate(char board[SIZE][SIZE], int row, int col){
    if(board[row][col] !='O' && board[row][col] != 'X') return true;
    return false;
}

int evaluate(char board[SIZE][SIZE]){
    if(winner(board, 'X')) return 1;
    else if(winner(board,'O')) return -1;
    else if(isBoardFull(board)) return 0;
    else return 2;
}
int minimax(char board[SIZE][SIZE], int depth, bool isMax){
    int score = evaluate(board);
    if(score != 2) return score;
    
    char ch;
    if(isMax){
        int max = -1000;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                if(pos_Validate(board,i,j)){
                    ch = board[i][j];
                    board[i][j] = 'X';
                    int current = minimax(board, depth + 1, false);
                    max = (current > max) ? current : max;
                    board[i][j] = ch;
                }
            }
        }
        return max;
    }else {
        int min = 1000;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                if(pos_Validate(board,i,j)){
                    ch = board[i][j];
                    board[i][j] = 'O';
                    int current = minimax(board, depth + 1, true);
                    min = (current < min) ? current : min;
                    board[i][j] = ch;
                }
            }
        }
        return min;
    }
}

void hard(char board[SIZE][SIZE]){
    int player =1;
    int move;
    int bestVal= -1000;
    int row = -1;
    int col = -1;
    char ch;
    for(int i=0; i < SIZE; i++){
        for(int j=0; j < SIZE; j++){
            if(pos_Validate(board,i,j)){
                ch = board[i][j];
                board[i][j] = 'X';
                move = minimax(board,0,0);
                board[i][j] = ch;
                
                if(move > bestVal){
                    row = i;
                    col = j;
                    bestVal = move;
                }
            }
        }
    }
    board[row][col] = 'X';
}

void single(char board[SIZE][SIZE]){
    int difficulty_level;
    int move;    
    int row;
    int col;
    // printf("Do you want to play easy or hard\n\nEnter 1 for Easy and 0 for Hard\n");
    // scanf("%d",&difficulty_level);
    
       
    do{
        print_board(board);
        printf("Enter move ");
        scanf("%d",&move);
        row = (move - 1) / 3;
        col = (move - 1) % 3;
        
         
        board[row][col] = 'O';
        
        if(winner(board, 'O')){
            printf("Congratulations you won \n");
            break;
        }
        if(isBoardFull(board)){
            printf("Game is draw");
            break;
        }
        
        hard(board);
        
        if (winner(board, 'X')) {
            printf("Computer wins \n");
            break;
        }

        if (isBoardFull(board)) {
            printf("Game is draw\n");
            break;
        }
    
    }while(isBoardFull(board)!=1);
    return;
}
int main(){
    int game_mode; // to play single or multiplayer 
    int cont; //to continue
    do{
        char board[SIZE][SIZE] = {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };
        
        printf("Wanted to play  multiplayer or single \n Enter 1 for multiplayer and 0 for single ");
        scanf("%d",&game_mode);    
        
        if(game_mode){
            printf("X is for player 1 and O is for player 2\n");
            // multiplayer(board);
        }else{
            single(board);
        }
        print_board(board);
        
        printf("Do you want to play again, Enter 1 to continue \n");
        scanf("%d",&cont);
    }while(cont);
}





// void multiplayer(char board[SIZE][SIZE]){
//     char player = 'X';
//     int move;
//     int row;
//     int col;
//     do{
//         print_board(board);
//         printf("Turn of player %c, Enter position ",player);
//         scanf("%d",&move);
//         row = (move - 1) / 3;
//         col = (move -1) % 3;
        
//         if(pos_Validate(board,row,col)){
//             if(player == 'X'){
//                 board[row][col] = player;
//             }else if(player == 'O'){
//                 board[row][col] = player;
//             }
             
//             player = (player == 'X') ? 'O' : 'X';
//         }else{
//             printf("Enter move again \n");
//         }
//         if(winner(board)!=0) {
//             printf("Winner is %c\n", winner(board));
//             return;
//         }
//     }while(isBoardFull(board));
//     printf("Game Draw \n");
//     return;
// }
----------------------------------------------------------------------------
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 3

void print_board(char board[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        printf("\n");
        for(int j=0;j<SIZE;j++){
        
            if(j <SIZE-1){
                printf(" %c |",board[i][j]);
                
            }else {
                printf(" %c ",board[i][j]);
            }
            
        }
        printf("\n");
        if(i<SIZE-1) for(int j=0;j<SIZE;j++) printf(" -- ");
    }
    printf("\n");
}
bool check(char board[SIZE][SIZE]){
    int a=0;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(board[i][j] == 'X' || board[i][j] == 'O'){
               a++; 
            }    
        }
    }
    if(a==9) return 0;
    return 1;
}
char winner(char board[SIZE][SIZE]){
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] ) return board[0][i];//for column
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return board[i][0];//for row
    }
    
    //for diagonals
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2]; 
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0]; 
    
    return 0;
    
}
bool pos_Validate(char board[SIZE][SIZE], int row, int col){
    if(board[row][col] !='O' && board[row][col] != 'X') return 1;
    return 0;
}
void multiplayer(char board[SIZE][SIZE]){
    char player = 'X';
    int move;
    int row;
    int col;
    do{
        print_board(board);
        printf("Turn of player %c, Enter position ",player);
        scanf("%d",&move);
        row = (move - 1) / 3;
        col = (move -1) % 3;
        
        if(pos_Validate(board,row,col)){
            if(player == 'X'){
                board[row][col] = player;
            }else if(player == 'O'){
                board[row][col] = player;
            }
             
            player = (player == 'X') ? 'O' : 'X';
        }else{
            printf("Enter move again \n");
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
    int move;
    int row;
    int col;
    do{
        if(player == 'X'){
            printf("Enter position ");
            scanf("%d", &move);
        }else if(player == 'O'){
            // move = minimax(board);
        }
        row = (move - 1) / 3;   
        col = (move - 1) % 3;
    
        
        if(pos_Validate(board,row,col)){
            
        }else{
            printf("Enter position again \n");
        }
    }while(1);
}
int main(){
    int difficulty_level; // if single palyer then difficulty level of the game;
    int game_mode; // to play single or multiplayer 
    int cont; //to continue
    do{
        char board[SIZE][SIZE] = {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };
        
        printf("Wanted to play  multiplayer or single \n Enter 1 for multiplayer and 0 for single ");
        scanf("%d",&game_mode);    
        
        if(game_mode){
            printf("X is for player 1 and O is for player 2\n");
            multiplayer(board);
        }else{
            printf("Do you want to play easy or hard\n\nEnter 1 for Easy and 0 for Hard\n");
            scanf("%d",&difficulty_level);
            if(difficulty_level){
                // easy(board);
            }else{
                hard(board);
            }
        }
        print_board(board);
        
        printf("Do you want to play again, Enter 1 to continue \n");
        scanf("%d",&cont);
    }while(cont);
    
    
}
