class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int left_sum=0;

        for(int num:nums){
            sum+=num;
        }
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];

            if(left_sum==sum){
                return i;
            }
            
            left_sum+=nums[i];

            
        }return -1;
    }
};