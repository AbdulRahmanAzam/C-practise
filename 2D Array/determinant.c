#include<stdio.h>
int matrix(int arr[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}


int det(int arr[3][3],int n){
	int i,j,sum=0;
	int a=1,b=1,k,l;
	for(i=0;i<1;i++){
		for(j=0;j<3;j++){
	        for(k=0;k<3;k++){
	            for( l=0;l<3;l++){
	                if((k!=i || l!=j) && k==l){
	                    a *= arr[k][l];              
	                }else if((k!=i || l!=j) && k!=l){
	                    b *= arr[k][l];
	                }
	            }
	        }	  
	        if(j%2==0){
	            sum += arr[i][j]*(a -b);
	        }else sum -= arr[i][j]*(a -b);
	        printf("%d",sum);
	        sum=0;
		}//end j loop
	}//end i loop
	
}//end det

int main(){
	int arr[3][3] = {
	    {1,-2,3,},
	    {2,0,3,},
	    {1,5,4,}
	};
	int n=2;
	
// 	matrix(arr);
     det(arr,n);
	return 0;
}
