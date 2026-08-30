class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex=0;
        int maxindex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[minindex]){
                minindex=i;
            }
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }
        if(minindex>maxindex) swap(minindex,maxindex);
        int left=maxindex+1;
        int right=nums.size()-minindex;
        int both = (minindex + 1) + (nums.size() - maxindex);
        return min({left, right, both});
    }
};