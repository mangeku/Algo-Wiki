#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	cin >> n; 
	pair< int , int > p[n]; 
	for(int i = 0 ; i < n ; i++) cin >> p[i].first >> p[i].second; 
	int ans = 0; 
	for(int i = 0 ; i < n ; i++){
		int x1 = p[i].first , y1 = p[i].second; 
		for(int j = i+1 ; j < n ; j++){
			int x2 = p[j].first , y2 = p[j].second; 
			if(abs(y2-y1) <= abs(x2-x1)) ans++;  
		}
	}
	cout << ans << endl; 
	return 0; 
}
