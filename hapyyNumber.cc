// Source : https://leetcode.com/problems/happy-number/
// Author : hanker
// Date   : 2016-1-5

/********************************************************************************** 
* Write an algorithm to determine if a number is "happy".
* A happy number is a number defined by the following process: Starting with any positive integer, 
* replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), 
* or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
***********************************************************************************/

class Solution {
public:
    bool isHappy(int n) {
        map<int,int> maps;
        while(n != 1) {
            n = getSquares(n);
            maps[n]++;
            if (maps[n] > 1) return false;
        }
        return true;
    }
    
    int getSquares(int n) {
        int result = 0;
        while(n) {
            result += pow(n%10, 2);
            n /= 10;
        }
        return result;
    }
};