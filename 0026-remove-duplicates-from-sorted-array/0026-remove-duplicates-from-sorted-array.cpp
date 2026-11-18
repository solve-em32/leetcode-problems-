class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
if (nums.empty()) return 0;
        
        int i = 0; // Points to the last unique element
        
        for (int j = 1; j < nums.size(); j++) {
            // If we find a new unique element
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j]; // Place it next to the last unique element
            }
        }
        
        // Return the count of unique elements (index + 1)
        return i + 1;
    }
};