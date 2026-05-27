class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; ++i){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int curr = -1 * nums[i];
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                if(nums[left] + nums[right] == curr){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);
                    result.push_back(ans);
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
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
