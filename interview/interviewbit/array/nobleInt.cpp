#include<bits/stdc++.h> 
using namespace std; 
int solve(vector< int > & arr){
	int n = arr.size();
	sort(arr.begin() , arr.end());
	for(int i = 0 ; i < n - 1 ; i++){
		if(arr[i] != arr[i + 1 ] && arr[i] == (n - i - 1)) return arr[i]; 
	}
	if(arr[n-1] == 0) return 0; 
	return -1; 
}
int main(){
	int n;
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i]; 
	int ans = solve(arr);	
	if(ans == -1){
		cout << "No noble integer present" << endl; 
	}
	else 
		cout << ans << endl; 
}
