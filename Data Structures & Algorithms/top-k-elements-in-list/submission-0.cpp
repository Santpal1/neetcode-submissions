class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); ++i){
            m[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto pr: m){
            v.push_back({pr.first, pr.second});
        }
        sort(v.begin(), v.end(), 
            [](pair<int, int> a, pair<int, int> b){
                return a.second > b.second;
            }
        );
        vector<int> ans;
        for(int i = 0; i < k; ++i){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
