#include<bits/stdc++.h> 
using namespace std; 

int maxSubArray(vector< int > & arr)
{
	int ans = INT_MIN; 
	int cur = 0; 
	int n = arr.size(); 
	for(int i = 0 ; i < n ; i++){
		cur += arr[i]; 
		ans = max(ans , cur);
		cur = max(0 , cur);
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i]; 
	int ans = maxSubArray(arr);	
	cout << "maximum subarray sum of this array is : " << ans << endl;
	return 0; 
}
