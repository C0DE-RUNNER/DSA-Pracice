/*

*/



class Solution {
public:
    bool judgeSquareSum(int c) {
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
