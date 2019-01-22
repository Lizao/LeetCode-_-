int climbStairs(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int f1=1,f2=2,c=0; 
    for(int i=3;i<=n;i++)
    {
        c=f1+f2;
        f1=f2;
        f2=c;
    }
    return c;     
}
