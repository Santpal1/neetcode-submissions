class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto n : nums){
            s.insert(n);
        }
        int maxLength = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(s.find(nums[i] - 1) == s.end()){
                int length = 1;
                while(s.find(nums[i] + length) != s.end()){
                    length++;
                }
                maxLength = max(maxLength, length);
            }
        }
        return maxLength;
    }
};
