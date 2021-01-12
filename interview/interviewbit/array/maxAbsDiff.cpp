#include<bits/stdc++.h> 
using namespace std; 

int solve(vector< int > & A)
{
	int maxi1 = INT_MIN , maxi2 = INT_MIN; 
	int mini1 = INT_MAX , mini2 = INT_MAX;
	int n = A.size();
	for(int i = 0 ; i < n ;i++)
	{
		maxi1 = max(maxi1 , A[i] + i);
		mini1 = min(mini1 , A[i] + i);
		maxi2 = max(maxi2 , A[i] - i);
		mini2 = min(mini2 , A[i] - i);
	}
	return max(maxi1 - mini1 , maxi2 - mini2);
}

int main(){
	int n; 
	cin >> n; 
	vector< int > arr; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i]; 
	}
	int ans = solve(arr);
	cout << "max absoute difference is : " << ans << endl; 
	return 0; 
}
