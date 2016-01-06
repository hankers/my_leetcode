// Source : https://leetcode.com/problems/add-digits/
// Author : hanker
// Date   : 2015-12-10

/********************************************************************************** 
 * Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 *
 * For example:
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 *
 * Follow up:
 * 	Could you do it without any loop/recursion in O(1) runtime?
 *
 **********************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std; 

class Solution {
public:
	int addDigits(int num) {
        	if ((num/10) == 0)
			return num;
		else {
			return addDigits(getDigit(num));
		}
    	}
    	/* easy method
	 * 1) num <=9, return num
         * 2) num > 9, reutrn num%9 if num%9>0
         *    return 9 if num%9 ==0
	 */
    	int addDigits02(int num) {
    		return (num-1)%9 + 1;
	}

    	int getDigit(int num) {
		int digit = 0;
		while(num) {
			digit += (num%10);
			num /= 10;
		}	
		return digit;
   	}
};

