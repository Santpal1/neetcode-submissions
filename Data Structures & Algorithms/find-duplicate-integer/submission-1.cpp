class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Given that each integer in nums is in the range [1,n]
        for(int num: nums){
            int i = abs(num);
            if(nums[i] < 0){
                return i;
            }
            nums[i] *= -1;
        }
    }
};
