// Source : https://leetcode.com/problems/ugly-number/
// Author : hanker
// Date   : 2016-1-5

/********************************************************************************** 
* Write a program to check whether a given number is an ugly number.
* Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 
* For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
* Note that 1 is typically treated as an ugly number.
***********************************************************************************/

class Solution {
public:
    bool isUgly(int num) {
        bool uglyFlag = false;
        int factor[4] = {2,3,5};
        if (num < 1) return false;
        if (num == 1) uglyFlag = true;
        
        for (int i = 0; i < 3; i ++) {
            for (; num%factor[i] == 0; ) {
                num /= factor[i];
            }
        }
        if (num == 1) uglyFlag = true;
        
        return uglyFlag;
    }
};