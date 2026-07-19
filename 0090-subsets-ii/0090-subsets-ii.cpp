class Solution {
public:
    void subset(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& storeans){
        if(i==nums.size()){
            return storeans.push_back({ans});
        }
        ans.push_back(nums[i]);
        subset(nums,ans,i+1,storeans);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        subset(nums,ans,idx,storeans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> storeans;
        vector<int>ans;
        subset(nums, ans, 0, storeans);
        return storeans;
    }
};