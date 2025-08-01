// User function Template for C++
class Solution {
  public:
    long long count(int n) {
        // your code here
        int p=n*(n-1)/2;
        return pow(2,p);
    }
};