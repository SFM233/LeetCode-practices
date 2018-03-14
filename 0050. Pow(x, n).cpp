//Simply fast power recursion
double myPow(double x, int n) {
    //To avoid runtime error
    if(n==INT_MIN) return myPow(1/x,-(n+2))/x*x;
    if(n<0) return myPow(1/x,-n);
    if(n==0) return 1;
    if(n%2==0){
        return myPow(x*x, n/2);
    }
    else{
        return x*myPow(x*x, n/2);
    }

}
