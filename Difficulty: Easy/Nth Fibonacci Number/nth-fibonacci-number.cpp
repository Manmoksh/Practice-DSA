// User function Template for C++
class Solution {
  public:
    // int helper(int n){
        
    // }
    int nthFibonacci(int n) {
        // code here
       if(n<=1) return n;
       return nthFibonacci(n-1)+nthFibonacci(n-2);
       
    }
};