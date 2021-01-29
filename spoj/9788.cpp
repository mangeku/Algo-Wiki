#include<bits/stdc++.h> 
using namespace std; 


int main(){
	
	int n; cin >> n; 
	set< int > st; 
	vector< int > arr(n); 
	for(int i = 0 ; i < n ;i++){
		int x , m; 
		cin >> x >> m; 
		arr[i] = x; 
		for(int j = 0 ; j < m ; j++){
			int y; 
			cin >> y; 
			st.insert(y); 
		}
	}
	int ans = st.size(); 
	for(int i = 0 ; i < n ; i++){
		if(st.find(arr[i]) != st.end()) ans -= 1; 
	}
	cout << ans << endl; 
	return 0; 
}
