/*
Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Example 1:

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.
Example 2:

Input:
X = 5
Output:
2684354560 
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get, 
10100000000000000000000000000000,
whose decimal value is 2684354560.
Your Task:
You don't need to read input or print anything. Your task is to complete the function reversedBits() which takes an Integer X as input and returns the answer.

Expected Time Complexity: O(log(X))
Expected Auxiliary Space: O(1)

Constraints:
0 <= X < 232

*/



class Solution {
  public:
    long long binaryToDecimal(string n)
    {
        string num = n;
        long long dec_value = 0;
        long long base = 1;
        long long len = num.length();
        for (long long i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }
     
        return dec_value;
    }

    long long reversedBits(long long X) {
        // code here
        string s = bitset<32>(X).to_string();
        reverse(s.begin(), s.end());
        long long ans = binaryToDecimal(s);
        return ans;
        
    }
};
