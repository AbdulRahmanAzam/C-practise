
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[] = "yyybbbbyyy";
    char *p1 = "Yasir";
    char *p2 = "Beenish";
    int index;
    int n = strlen(str);
    printf("string length = %d\n",n );
    char first;
    int type;
    printf("Who choses first = \n yasir (y) or beenish(b)\n");
    scanf(" %c" , &first );
    if(first == 'y'){
        type = 1;
    }else type =0;
    
    for(int i=0;i<5;i++){
        printf("enter index = ");
        scanf("%d \n" ,&index);
        
        if(type==1){
            type=0;
            
            if(str[index+1] == 'y' && str[index-1] == 'y'){
                printf("%s enter index = ", str);
                scanf("%d \n" ,&index);
                printf("%s removes the piece y at index %d ", p1, index);
                for(int k =index;k<n;k++){
                    str[k] == str[k+1];
                }
                printf("%s \n", str);
            }else{
                printf("Enter correct value of index\n");
            };
        }else if(type==0){
            type =1;
            printf("%s enter index = ", str);
            scanf("%d \n" ,&index);
            if(str[index+1] == 'b' && str[index-1] == 'b'){
                printf("%s removes the piece y at index %d\n", p2, index);
                for(int k=index;k<n;k++){
                    str[k] =str[k+1];
                }
                printf("%s \n", str);
                
            }else{
                printf("Enter correct value of index\n");
            };
        }
        if(type){
            
        }
        
    }
    printf(" %s ", p1);
    for(int j=0;str[j] != '\0';j++){
        printf(" %c", str[j]);
    }
}
// // Online C compiler to run C program online
// #include <stdio.h>
// #include <stdio.h>
// int main(){
//     int arr[5][5] ={
//         {1,2,3,4,5},
//     {1,2,3,4,5},
//     {1,2,3,4,5},
//     {1,2,3,4,5},
//     {1,2,3,4,5}};
//     int filter[3][3] = {0};
//     printf("Enter values ");
    
//     // for(int i=0;i<5;i++){
//     //     for(int j=0;j<5;j++){
//     //         scanf("%d", &arr[i][j]);
//     //     }
//     // }
//     int a=3,b=3, m=0,x=0,y=3;
//     int i,j,k,l;
//     int sum =0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=0;
//             for( k=i;k<a;k++){
//                 for (l=j;l<b;l++){
//                     sum += arr[k][l]  ;
//                 }
//             }
//             filter[i][j]= sum;
//             if(b==5){
//                 a++;
//                 b=3;
//             }else{
//                 b++;
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",filter[i][j]);
//         }
//         printf("\n");
//     }
// }//end  main
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int a[5] = {5,1,15,20,25};
//     int i,j,m;
//     i = ++a[1];
//     j = a[1]++;
//     m = a[i++];
    
//     printf("%d %d %d", i,j,m);
// }
