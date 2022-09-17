/*
Geek is very fond of patterns. Once, his teacher gave him a star pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.

Example 1:

Your Task:

You don't need to input anything. Complete the function printDiamond() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printDiamond(int n) {
	    // code here
	    for(int i= 1, k = 0; i <= n; ++i, k = 0)
        {
        for(int space = 1; space <= n-i; ++space)
        {
            cout <<" ";
        }

        while(k != i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
	    
	    for(int i=n,k=0;i>0;i--,k=0){
	        for(int j=0;j<n-i;j++){
	            cout<<" ";
	        }
	        while(k != i){
	            cout<<"* ";
	            k++;
	        }
	        cout<<endl;
	    }
	}
};
