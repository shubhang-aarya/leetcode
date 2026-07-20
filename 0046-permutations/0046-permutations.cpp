class Solution {
public:
    void getpermute(vector<int>& nums,vector<vector<int>>&ans,int idx){
        int n=nums.size();
        if(idx==n){
            return ans.push_back({nums});
        }

        for(int i=idx;i<n;i++){
            swap(nums[idx],nums[i]);
            getpermute(nums,ans,idx+1);

            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getpermute(nums,ans,0);
        return ans;
        
    }
};