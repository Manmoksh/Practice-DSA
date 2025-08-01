class Solution {
  public:
  
  
    int power(int x,int n){
        if(n==1) return x;
        return x*power(x,n-1);
    }
    int reverseExponentiation(int n) {
        // code here
        int temp=n;
        int rev=0;
        while(temp){
            int digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
            
        }
        return power(n,rev);
    }
};