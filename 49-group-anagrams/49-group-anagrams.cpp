class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        
        int size = strs.size();
        string temp;
        
        for (int i = 0; i < size; i++) {
            temp = strs[i]; // take the original string
            sort(strs[i].begin(), strs[i].end()); // sort the string to put it in the map
            mp[strs[i]].push_back(temp); // push the un-sorted string
        }
        
        vector<vector<string>> result;
        
        for (auto it = mp.begin(); it != mp.end(); it++) 
            result.push_back(it->second);
        
    
        return result;
        
        
        
        
        
        
    }
};