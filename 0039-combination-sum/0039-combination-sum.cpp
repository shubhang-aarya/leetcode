class Solution {
public:
    void allcombo(vector<vector<int>>& ans,vector<int>& comb,vector<int>& arr, int target,int idx){
        if(target == 0)
    {
        ans.push_back(comb);
        return;
    }

    if(idx == arr.size() || target < 0)
        return;

    comb.push_back(arr[idx]);
    allcombo(ans, comb, arr, target-arr[idx], idx);
    comb.pop_back();

    allcombo(ans, comb, arr, target, idx+1);

}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        allcombo(ans,comb,arr,target,0);
        return ans;
    }
};