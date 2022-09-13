/*

Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

Example 2:

Input: c = 3
Output: false
 
Constraints:

0 <= c <= 231 - 1

*/


class Solution {
public:
    bool judgeSquareSum(int c){
        if(c < 0)
            return false;
        
        long int h = sqrt(c), l=0, temp = 0;
        while(l<=h){
            temp = l*l + h*h;
            if(temp == c)
                return true;
            else if(temp > c){
                h--;
            }
            else
                l++;
        }
        
        return false;
    }
};
