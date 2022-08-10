class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int left = 0, right = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            right = nums.size() - 1;
            left = i + 1;    
            if (i != 0 and nums[i] == nums[i-1])
                continue;
            while(left < right) {
                sum = nums[i] + nums[left] + nums[right];
                if (sum > 0)
                    right--;
                else if (sum < 0) 
                    left++;
                else {
                    answer.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    while(nums[left] == nums[left - 1] and left < right)
                        left++;
                    
                }
            }
            
        }
        return answer;
        
    }
};