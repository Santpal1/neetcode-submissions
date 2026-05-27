class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; ++i){
            int curr = -1 * nums[i];
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                if(nums[left] + nums[right] == curr){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);
                    left++;
                    right--;
                    if(find(result.begin(), result.end(), ans) == result.end())
                        result.push_back(ans);
                }
                else if(nums[left] + nums[right] < curr){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return result;
    }
};
