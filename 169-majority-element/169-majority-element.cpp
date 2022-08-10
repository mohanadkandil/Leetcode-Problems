class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Moore's Voting Alogrithm
        // Time: O(n)
        // Space: O(1)
        
        int count = 0, element = 0;
        
        for(auto it : nums) {
            
            if (count == 0)
                element = it;
            
            if (it == element)
                count++;
            else
                count--;
        }
        return element;
    }
};