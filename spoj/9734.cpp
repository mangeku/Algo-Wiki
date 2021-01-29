#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 

int main(){
	int n , k; 
	cin >> n >> k;  
	int arr[n];
	for(int i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr , arr + n);  
	int j = 0; 
	int ans = 0;  
	for(int i = 0 ; i < n ; i++){
		while(j < n && arr[j] - arr[i] < k) j++; 
		if(j < n && arr[j] - arr[i] == k) ans++; 
	}
	cout << ans << endl; 
}
