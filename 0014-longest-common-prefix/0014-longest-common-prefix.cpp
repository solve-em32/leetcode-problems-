class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
if (strs.empty()) return "";
        
        // Loop through the characters of the first string
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            
            // Check this character against all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If we reach the end of another string or find a mismatch
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // If the first string is entirely a common prefix
        return strs[0];
    }
};