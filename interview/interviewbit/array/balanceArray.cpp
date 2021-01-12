#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int> nums){
		int n = nums.size(); 
		if(n == 1) return 1; 
		if(n == 0) return 0; 
		int sumOdd = 0 , sumEven = 0 ; 
		for(int i = 0 ; i < n ; i++){ 
			if(i%2) sumOdd += nums[i]; 
			else sumEven += nums[i]; 
		}
		int curOdd = 0 , curEven = nums[0]; 
		int res = 0; 
		int newEvenSum = 0 , newOddSum = 0; 
		for(int i = 1 ; i < n - 1 ; i++){
			if(i%2){
				curOdd += nums[i]; 
				newEvenSum = curEven + sumOdd - curOdd; 
				newOddSum = curOdd + sumEven - curEven - nums[i]; 
			}
			else{
				curEven += nums[i]; 
				newOddSum = curOdd + sumEven - curEven; 
				newEvenSum = curEven + sumOdd - curOdd - nums[i]; 
			}
			if(newEvenSum == newOddSum) res++; 
		}
		if(sumOdd == sumEven - nums[0]) res++; 
		if(n%2){
			if(sumOdd == sumEven - nums[n-1]) res++; 
		}
		else{
			if(sumOdd - nums[n-1] == sumEven) res++; 
		}
		return res; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++) cin >> nums[i]; 
	int ans = solve(nums); 
	cout << ans << endl; 
	
	
	return 0; 
}
