class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v3= nums1;
        v3.insert(v3.end(), nums2.begin(), nums2.end());
        sort(v3.begin(), v3.end());
        int vecSize = v3.size();
        if(vecSize % 2 ==1){
           return v3[vecSize/2];
        }else{
            int m = vecSize/2;
            return (v3[m-1]+v3[m])/2.0;
        }
        return 0;
    }
};
