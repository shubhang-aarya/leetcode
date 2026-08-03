class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        for(int i=0;i<m;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        int score=0;
        for(int col=n-1;col>=0;col--){
            int maxval=0;
            for(int row=0;row<m;row++){
                maxval=max(maxval,nums[row][col]);
            }
            score+=maxval;
        }return score;
    }
};