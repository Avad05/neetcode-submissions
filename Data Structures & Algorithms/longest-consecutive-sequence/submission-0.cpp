class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for(int i: nums){
            if(numSet.find(i - 1) != numSet.end()){
              continue; 
            }else{
                int length = 0;
                while(numSet.find(i + length) != numSet.end()){
                    length += 1;              
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
