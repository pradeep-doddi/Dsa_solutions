class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j=0;j<k;j++){
            int index=0;
            int mini=INT_MAX;
             for(int i=0;i<nums.size();i++){
                if(nums[i]<mini){
                    mini=nums[i];
                    index=i;
                }
        }
         nums[index] = nums[index]*multiplier;
         
        }
        return nums;
       
    }
};