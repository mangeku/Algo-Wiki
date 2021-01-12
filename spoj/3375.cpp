#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	for(int k = 1 ; k <= t ; k++){
		int sum , n; 
		cin >> sum >> n; 
		vector< int > arr(n);
		for(int j = 0 ;j < n; j++) cin >> arr[j]; 
		sort(arr.rbegin(),arr.rend()); 
		int i=0; 
		int to = 0; 
		for(i = 0 ; i < n  && to < sum ; i++){
			to += arr[i]; 
		}
		printf("Scenario #%d:\n",k); 
		if(to < sum) cout << "impossible" << endl; 
		else cout << i << endl; 
		//cout << endl; 
	}
	
	return 0; 
}
