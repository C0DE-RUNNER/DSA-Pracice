/*
Given an array of integers, find the elements which have an even number of digits.

Example
Array: [42, 564, 5775, 34, 123, 454, 1, 5, 45, 3556, 23442]
Answer: 42, 5775, 34, 45, 3556
*/

int digi(int n){
	int count=0;
	while(n>0){
		n/=10;
		count++;
	}
	return count;
}

vector<int> getEvenDigitNumbers(vector<int> &arr) {
	vector<int> res;
	for(int i=0;i < arr.size();i++){
		if(digi(arr[i])%2 == 0){
			res.push_back(arr[i]);
		}
	}
	return res;
    // add your logic here
}
