class Solution {
public:
    int minOperations(string s) {
        vector<int> v;
        for (char c : s) {
            v.push_back(c - '0');
        }

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] != i % 2)
                count1++;

            if (v[i] != (i + 1) % 2)
                count2++;
        }

        return min(count1, count2);
    }
};