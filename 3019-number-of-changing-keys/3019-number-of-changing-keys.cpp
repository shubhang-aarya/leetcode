class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
            
            if(s[i-1] >= 'A' && s[i-1] <= 'Z') {
                s[i-1] = s[i-1] + 32;
            }

            if(s[i] != s[i-1]) {
                count++;
            }
        }

        return count;
    }
};