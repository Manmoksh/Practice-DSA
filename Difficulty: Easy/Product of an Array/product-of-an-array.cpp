class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        // code here
        int MOD=1e9 + 7;
        long long ans=1;
        for(int i:arr){
         ans=ans*i;
         ans=ans%MOD;
    }  
        return ans;
    }
};