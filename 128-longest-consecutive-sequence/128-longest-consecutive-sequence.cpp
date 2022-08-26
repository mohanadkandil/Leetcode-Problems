class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // Time: O(nlogn)
        // Space: O(1)
        
        sort(nums.begin(), nums.end());
        
        int _max = 0, current = 0, n = nums.size();
        if (n == 0) return 0;
        
        for (int i = 0; i < n; i++) {
            if (i+1 < n) {
                if (abs(nums[i] - nums[i+1]) == 1) current++;
                else if (nums[i] == nums[i+1]) current += 0;
                else 
                    current++, _max = max(current, _max), current = 0;
            }
        }
        current++;
        return max(_max, current);
        
    }
};