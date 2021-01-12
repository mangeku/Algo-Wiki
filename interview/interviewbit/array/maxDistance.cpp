#include<bits/stdc++.h> 
using namespace std; 

int maxDistance(vector<int>&arr){
	int n = arr.size(); 
	vector< int > mini(n);
	vector< int > maxi(n);
	mini[0] = arr[0]; 
	for(int i = 1 ; i < n ; i++){
		mini[i] = min(arr[i],mini[i-1]);
	}
	maxi[n-1] = arr[n-1]; 
	for(int i = n - 2 ; i >= 0 ; i--){
		maxi[i] = max(maxi[i+1],arr[i]);
	}
	int i = 0 , j = 0 , maxDiff = 0; 
	while(i < n && j < n){
		if(mini[i] < maxi[j]){
			maxDiff = max(maxDiff,j-i);
			j += 1; 
		}
		else 
			i += 1; 
	}
	return maxDiff; 
	
}
int main(){
	int n; 
	cin >> n; 
	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i]; 
	int ans = maxDistance(arr);
	cout << ans << endl; 
}
