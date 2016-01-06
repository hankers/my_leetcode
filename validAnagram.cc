// Source : https://leetcode.com/problems/valid-anagram/
// Author : hanker
// Date   : 2016-1-1

/********************************************************************************** 
* Given two strings s and t, write a function to determine if t is an anagram of s.
* For example,
* s = "anagram", t = "nagaram", return true.
* s = "rat", t = "car", return false.
***********************************************************************************/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int letterArray[30];
        bool flag = true;
        
        memset(letterArray, 0 ,sizeof(letterArray));
        
        for (int i = 0; i < s.size(); i ++) 
            letterArray[s[i] - 'a'] ++;
        
        for (int i = 0; i < t.size(); i ++) {
            letterArray[t[i] - 'a']--;
            if (letterArray[t[i] - 'a'] < 0) {
                flag = false;
                break;
            }
        }
        
        for (int i = 0; i < 26; i ++) {
            if (letterArray[i] != 0) {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};