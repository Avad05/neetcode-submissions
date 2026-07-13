class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_map<char, int> count;

        int l=0;
        for(int r = 0; r<s.length(); r++){
            count[s[r]]++;
            auto maxIt = count.begin();
            for(auto it = count.begin(); it != count.end(); ++it){
                if(it->second > maxIt->second){
                    maxIt=it;
                }
            }
            int maxVal = maxIt->second;
            if(r-l+1 - maxVal > k){
                count[s[l]]--;
                l++;                
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
