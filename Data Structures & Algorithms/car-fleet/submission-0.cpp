class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> jodi;
        for(int i=0; i< position.size(); i++){
            jodi.push_back({position[i], speed[i]});
        }
        sort(jodi.rbegin(), jodi.rend());
        vector<double> dabba;
        for(auto& p :jodi){
            dabba.push_back((double)(target - p.first) / p.second);
            if(dabba.size() >= 2 && dabba.back() <= dabba[dabba.size()-2]){
                dabba.pop_back();
            }
        }
        return dabba.size();
    }
};
