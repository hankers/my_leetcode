// Source : https://leetcode.com/problems/contains-duplicate/
// Author : hanker
// Date   : 2016-1-1

/********************************************************************************** 
* Given an array of integers, find if the array contains any duplicates. 
* Your function should return true if any value appears at least twice in the array, 
* and it should return false if every element is distinct.
***********************************************************************************/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> maps;
        
        for (int i = 0; i < nums.size(); i ++) {
            maps[nums[i]] ++;
            if (maps[nums[i]] > 1) return true;
        }
        
        return false;
    }
};