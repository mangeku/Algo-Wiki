#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m , d; 
		cin >> n >> m >> d; 
		priority_queue< int > pq;
		for(int i = 0 ; i < n ; i++){
			int x; 
			cin >> x; 
			pq.push(x); 
		}
		int cnt = 0 ;  
		while(pq.top() > d && cnt < m){
			int x = pq.top() - d; 
			pq.pop(); 
			pq.push(x); 
			cnt++; 
		}
		if(cnt < m) cout << "NO" << endl; 
		else cout << "YES" << endl; 
	}
	
	
	
	return 0; 
}
