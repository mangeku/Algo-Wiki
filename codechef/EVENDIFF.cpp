#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n; 
		int cnt1 = 0 , cnt2 = 0; 
		int x; 
		for(int i = 0 ; i < n ; i++){
			cin >> x; 
			if(x % 2) cnt1++; 
			else cnt2++; 
		}
		cout << min(cnt1 , cnt2 ) << endl;
	}
	
	return 0; 
}
