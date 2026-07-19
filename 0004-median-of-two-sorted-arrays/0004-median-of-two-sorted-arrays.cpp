class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector <int> merge;
        int i=0,j=0;
        while(i<n1){
            merge.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            merge.push_back(nums2[j]);
            j++;
        }
        sort(merge.begin(),merge.end());
        int n=merge.size();
        double solution;
        if(n%2==1){
            solution=merge[n/2];
        }
        else{
            double sol;
            sol=(merge[n/2]+merge[(n/2)-1]);
            solution=sol/2;
        }
        return solution;
    }
};