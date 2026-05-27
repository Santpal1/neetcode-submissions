class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        int maximum = 0;
        prefix[0] = 0;
        for(int i = 1; i < n; ++i){
            int currMax = height[i - 1];
            maximum = max(currMax, maximum);
            prefix[i] = maximum;
        }
        maximum = 0;
        suffix[n - 1] = 0;
        for(int i = n - 2; i >= 0; --i){
            int currMax = height[i + 1];
            maximum = max(currMax, maximum);
            suffix[i] = maximum;
        }
        int areaSum = 0;
        for(int i = 0; i < n; ++i){
            int currWater = min(prefix[i], suffix[i]) - height[i];
            if(currWater >= 0) areaSum += currWater;
        }
        return areaSum;
    }
};
