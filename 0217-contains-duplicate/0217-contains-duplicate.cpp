class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0,j=i+1;i<nums.size()-1;i++,j++){
            if(nums[i]==nums[j]) return 1;
        }
        return 0;
    }
};