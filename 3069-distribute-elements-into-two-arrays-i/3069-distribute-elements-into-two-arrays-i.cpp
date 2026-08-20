class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();

        vector<int>n1;
        vector<int>n2;

        n1.push_back(nums[0]);
        n2.push_back(nums[1]);


        for(int i=2;i<n;i++){
            if(n1.back()>n2.back()){
                n1.push_back(nums[i]);
            }
            else n2.push_back(nums[i]);
        }
        vector<int>result;

        for(int i:n1){
            result.push_back(i);
        }

        for(int j:n2){
            result.push_back(j);
        }
        return result;
    }
};