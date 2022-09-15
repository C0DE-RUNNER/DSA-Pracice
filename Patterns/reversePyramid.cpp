/*
Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a pattern.

 

Example 1:

Input: 5

Output:

*********
 *******
  *****
   ***
    *

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=n,k=0;i>0;i--,k=0){
	        for(int j=0;j<n-i;j++){
	            cout<<" ";
	        }
	        while(k != 2*i-1){
	            cout<<"*";
	            k++;
	        }
	        cout<<endl;
	    }
	}
};
