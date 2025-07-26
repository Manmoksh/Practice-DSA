class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int curr=0,prev=-1,next=1;
        int n=arr.size();//int j=arr.size()-1;
        for(int i=0;i<n;i++){
            if(next==n){
                 if(arr[curr]>arr[prev]) return curr;
                 
            }else if(prev==-1){
                 if(arr[curr]>arr[next]) return curr;
                 prev++;
                 curr++;next++;
                
            }else{
                if(arr[curr]>arr[prev] && arr[curr]>arr[next]){
                    return curr;
                }
                  prev++;
                 curr++;next++;
                
                
            }
        }
        return 0;
    }
};