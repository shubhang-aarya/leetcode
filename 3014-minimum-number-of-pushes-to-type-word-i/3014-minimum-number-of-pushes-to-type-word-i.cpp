class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int num = 0, push = 0;

        if (n <= 8) {
            return n;
        }

        if (n > 8 && n <= 16) {
            num = n - 8;
            push = 8 + num * 2;
        }

        if (n > 16 && n <= 24) {
            num = n - 16;
            push = 8 + 16 + num * 3;
        }

        if (n > 24) {
            num = n - 24;
            push = 8 + 16 + 24 + num * 4;
        }

        return push;
    }
};