## memory = 6.4mb
int reverse(int x){
    long int k=0;
    int a=x,count=0;
    for(int j=0;a!=0;j++){
            a /= 10;
            count++;
        }
    for(int i=0;x!=0;i++){
        count--;
        k += x%10 * pow(10,count);
        x/=10;
    }
    if(k<pow(-2,31)|| k>pow(2,31)-1){
        return 0;
    }
    
    return k;
    
}
