 #include <stdio.h>

int main() {
    int i, j, k, l,m,c=0;
    int arr[27][27] = {
        {8, 3, 0}, 
        {0, 7, 0}, 
        {0, 0, 0},
        
        {6, 0, 0}, 
        {1, 9, 5}, 
        {0, 0, 0},
        
        {0, 9, 8}, 
        {0, 0, 0}, 
        {0, 6, 0},
        //--------------------------------------------------
        {8, 0, 0}, 
        {0, 6, 0}, 
        {0, 0, 3},
        
        {4, 0, 0}, 
        {8, 0, 3}, 
        {0, 0, 1},
        
        {7, 0, 0}, 
        {0, 2, 0}, 
        {0, 0, 6},
        //--------------------------------------------------
        {0, 6, 0}, 
        {0, 0, 0}, 
        {2, 8, 0},
        
        {0, 6, 0}, 
        {0, 0, 0}, 
        {2, 0, 0},
        
        {0, 0, 0}, 
        {0, 8, 0}, 
        {0, 7, 9},
        
    };
// validation of each box seperately
    for(m=0;m<9;m++){
        for (k = c; k < c+3 ; k++) {
            for (l = 0; l < 3; l++) { 
                for (i = c; i < c+3; i++) {
                    for (j = 0; j < 3; j++) {
                        if (arr[k][l] == arr[i][j]  && l!=j && arr[k][l]!=0) {
                        printf("%d ", arr[k][l]);
                        }
                    }
                }
            }
        }
        c+=3;
        printf("\n");
    }
    printf("done");
    return 0;
}

//---------------------------------------------------------------------------------
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool flag = true;
    int i, j, k, l,m=0,c=0;
    
    int brr[27][27] = {
        {8, 3, 0, 0, 7, 0, 0, 0, 0},
        
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        
        {0, 0, 0, 0, 8, 0, 0, 7, 9},
    };
    
        for (k = 0; k < 9 ; k++) {
            for (l = 0; l < 9; l++) {
                for (i = 0; i < 9; i++) {
                    for (j = 0; j < 9; j++) {
                        //checking column
                        if(brr[k][l]==brr[i][j] && k!=i && l==j && brr[k][l]!=0){
                            flag = false;
                            // printf("%d ",brr[k][l]);
                        }
                        //checking row
                        if(brr[k][l]==brr[i][j] && k==i && l!=j && brr[k][l]!=0){
                            flag = false;
                            // printf("%d",brr[k][l]);
                        }
                    }//j loop
                }// i loop
            }//l loop
        }//k loop
        
    
    
    for(int n=0;n<9;n++){
        for (k = m; k < m+3 ; k++) {
            for (l = c; l < c+3; l++) { 
                for (i = m; i < m+3; i++) {
                    for (j = c; j < c+3; j++) {
                        if (brr[k][l] == brr[i][j]  && (k!=i||l!=j) && brr[k][l]!=0) {
                            // printf("%d %d %d\n", brr[k][l],k,l);
                        }
                    }//j loop
                }//i loop
            }//l loop
            c+=3;
        }//k loop
        c=0;
        m+=3;
        printf("\n");
    }//m loop
    if(flag){
        printf("done");
    }else{
        printf("not done");
    }
    
    return 0;

}

//end main














