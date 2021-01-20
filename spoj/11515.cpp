#include<bits/stdc++.h> 
using namespace std; 
bool comp(pair< int , int > &a , pair< int , int > &b){
	if(a.second == b.second) return a.first<b.first; 
	else return a.second < b.second;  
}

int main(){
	int t; cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector< pair< int , int > > jobs(n); 
		int x , y; 
		for(int i = 0 ; i < n ;i++){
			cin >> x >> y; 
			jobs[i] = {x,y}; 
		}
		sort(jobs.begin(),jobs.end(),comp);
		int ans = 1;
		int limit = jobs[0].second;  
		for(int i = 1 ; i < n ; i++){
			if(jobs[i].first >= limit){
				ans += 1; 
				limit = jobs[i].second; 
			}
		}
		cout << ans << endl; 
	}	
	
	return 0; 
}
