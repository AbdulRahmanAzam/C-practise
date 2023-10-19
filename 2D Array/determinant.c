#include<stdio.h>
// int matrix(int arr[3][3]){
// 	int i,j;
// 	for(i=0;i<3;i++){
// 		for(j=0;j<3;j++){
// 			scanf("hello %d",&arr[i][j]);
// 		}
// 	}
// }
int det2(int arr[2][2]){
    int a=0,b=0,c,i,j,k;
    int sum =0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i!=j){
                a *= arr[i][j];
            }else if(i==j){
                b *= arr[i][j];
            }
        }
    }
    sum = a- b;
    printf("hello %d", sum);
}
int det (int arr[3][3]){
    int i,j,k,a=0,b=0,brr[2][2],c=0;
    
    for(i=0;i<3;i++){
        b=0;
        c=0;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(j!=i && k!=i){
                    brr[b][c] = arr[j][k];
                    c++;
                    printf("%d\n", arr[j][k]);
                }
            }
            b++;
        }//end j loop
        a = det2(brr);
        printf("%d", a);
    }//end i loop 
}// end det
// int det(int arr[3][3],int n){
// 	int i,j,sum=0;
// 	int a=1,b=1,k,l;
// 	for(i=0;i<1;i++){
// 		for(j=0;j<3;j++){
// 	        for(k=0;k<3;k++){
// 	            for( l=0;l<3;l++){
// 	                if((k!=i || l!=j)){
// 	                    if(){
// 	                        a *= arr[k][l];    
// 	                    }else if()
	                                  
// 	                }
// 	            }
// 	        }	  
// 	        if(j%2==0){
// 	            sum += arr[i][j]*(a -b);
// 	        }else sum -= arr[i][j]*(a -b);
// 	        printf("%d",sum);
// 	        sum=0;
// 		}//end j loop
// 	}//end i loop
	
// }//end det

int main(){
	int arr[3][3] = {
	    {1,-2,3,},
	    {2,0,3,},
	    {1,5,4,}
	};
	int n=2;
	
// 	matrix(arr);
     det(arr);
	return 0;
}
