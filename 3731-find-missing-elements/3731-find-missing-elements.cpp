class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> op;
        int i=0;
        for(int i = 0; i < n - 1; i++) {
            int curr = nums[i];
            int next = nums[i + 1];

            for(int num = curr + 1; num < next; num++) {
                op.push_back(num);
            }
        }return op;
    }
};