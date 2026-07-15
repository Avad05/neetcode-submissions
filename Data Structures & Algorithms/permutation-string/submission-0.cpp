class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> s1Count(26, 0);
        vector<int> windowSize(26, 0);

        for(int i = 0; i< s1.length(); i++){
            s1Count[s1[i] - 'a']++;
        } 
        int l=0;
        int r = l+s1.length()-1;
        for(int i = l; i < s1.length(); i++){
            windowSize[s2[i] -'a']++;

        }
        while(r<s2.length()){
        
        if( s1Count == windowSize){
            return true;
        }
        windowSize[s2[l] -'a']--;
        if(r== s2.length()-1) break;
        windowSize[s2[r+1] -'a']++;    
            l++;
            r++;
        
        }
        return false;
    }
};
