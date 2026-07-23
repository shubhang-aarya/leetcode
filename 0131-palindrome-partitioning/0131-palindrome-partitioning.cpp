class Solution {
public:
    bool isPal(string &s, int l, int r) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        return s==s2;
    }

    void part(string s, vector<string>& parts, vector<vector<string>>& ans) {
        if (s.empty()) {
            ans.push_back(parts);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string curr = s.substr(0, i + 1);

            if (isPal(curr, 0, curr.size() - 1)) {
                parts.push_back(curr);
                part(s.substr(i + 1), parts, ans);
                parts.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> parts;
        vector<vector<string>> ans;

        part(s, parts, ans);

        return ans;
    }
};