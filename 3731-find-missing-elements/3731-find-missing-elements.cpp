class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int start = nums[0];
        int end = nums.back();

        vector<int> op;
        set<int> s(nums.begin(), nums.end());

        for (int i = start + 1; i < end; i++) {
            if (s.count(i) == 0)
                op.push_back(i);
        }

        return op;
    }
};