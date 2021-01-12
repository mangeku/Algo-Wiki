#include<bits/stdc++.h> 
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);
 	while(1){ 
		int n , m; 
		cin >> n >> m; 
		if(n == 0 && m == 0) break; 
		unordered_set< int > st; 
		for(int i = 0 ; i < n ; i++){
			int x; 
			cin >> x; 
			st.insert(x);
		}
		int ans = 0; 
		for(int i = 0 ; i < m ; i++ ){
			int x; 
			cin >> x; 
			if(st.find(x) != st.end())
				ans++; 
		}
		cout << ans << endl;
	}
	return 0; 
}
