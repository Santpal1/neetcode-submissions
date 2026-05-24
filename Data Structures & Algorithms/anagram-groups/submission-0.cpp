class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> m;
        for(int i = 0; i < strs.size(); ++i){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(m.find(s) == m.end()){
                res.push_back({});
                m[s] = res.size() - 1;
            }
            res[m[s]].push_back(strs[i]);
        }
        return res;
    }
};
