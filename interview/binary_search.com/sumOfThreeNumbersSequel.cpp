#include<bits/stdc++.h> 
using namespace std; 
int solve(int K , vector< int > &arr)
{
	int ans = INT_MAX; 
	int n = arr.size();
	sort(arr.begin(), arr.end()); 
	for(int i = 0 ; i < n - 2 ; i++){
		int lo = i + 1 , hi = n - 1; 
		while(lo < hi){
			int cur = arr[i] + arr[lo] + arr[hi]; 
			if(cur == K) return 0; 
			else if(cur > K) hi--; 
			else lo++;
			ans = min(ans , abs(cur - K));
		}
	}
	return ans; 
}
int main(){
	int n;
	cin >> n; 
	vector< int > arr(n);
	for(int i= 0 ;i < n ; i++)	
		cin >> arr[i]; 
	int K; 
	cin >> K; 
	int ans = solve(K , arr);	
	cout << ans << endl; 
	return 0; 
}
