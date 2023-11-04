/* input : AGCTTACATATTACGAGTTG
output : 

A  *  *  *  *  *  * 
G  *  *  *  * 
C  *  *  * 
T  *  *  *  *  *  *  * 
*/

#include <stdio.h>

int main() {
    char str[] = "AGCTTACATATTACGAGTTG";
    int arr[100] ={0};
    char name[4] = {'A','G','C','T'};
    for(int i=0;str[i] != '\0';i++){
        switch(str[i]){
            case 'A':
                arr[0]++;
                break;
            case 'G':
                arr[1]++;
                break;
            case 'C':
                arr[2]++;
                break;
            case 'T':
                arr[3]++;
                break;
            default :
            printf("Enter correct DNA \n");
        }
    }//end i loop
    
    for(int i=0;i<4;i++){
        printf("%c ",name[i]);   
        for(int j=0; j< arr[i];j++){
            printf(" * ");
        }
        printf("\n");
    }
}//end main







