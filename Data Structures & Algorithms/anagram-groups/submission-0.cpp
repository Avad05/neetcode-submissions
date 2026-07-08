class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
           string copy = strs[i];
           sort(copy.begin(), copy.end());
           mp[copy].push_back(strs[i]);
        }
        for(auto pair: mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
