// This code uses Newton's method
int mySqrt(int x) {
// to avoid out of boundry
    if(x<0) return INT_MIN;
    if(x==0) return 0;
    if(x==1) return 1;
    if(x>INT_MAX) return INT_MAX;

    
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
}