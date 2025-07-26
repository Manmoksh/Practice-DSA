// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max=INT_MIN;
        int secondMax=INT_MIN;
        if (arr.size()<2)return -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                
            }
            
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]<max && arr[i]>secondMax){
                secondMax=arr[i];
                
            }
            
        }
        
        
        
        if(secondMax==INT_MIN)return -1;
        return secondMax;

        
    }
};
