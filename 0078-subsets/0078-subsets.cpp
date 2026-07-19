class Solution {
public:
    void subset(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allsubset){
        if(i==nums.size()){
            return allsubset.push_back({ans});
        }
        ans.push_back(nums[i]);
        subset(nums,ans,i+1,allsubset);
        ans.pop_back();

         subset(nums,ans,i+1,allsubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubset;
        vector<int>ans;
        subset(nums,ans,0,allsubset);
        return allsubset;
    }
};