class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int val = k;
        while (st.count(val)) {
            val += k;
        }
        return val;
    }
};