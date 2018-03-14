// Simple
bool isPalindrome(int x) {
    long long result = 0;
    long long dummy = x;
    if(x < 0)return false;
    while (x != 0){
        result *= 10;
        result += x%10;
        x = (x - left)/10;
    }
    return result == dummy;
}