#include<bits/stdc++.h> 
using namespace std; 
bool solve(vector<int> & arrive , vector<int> &depart , int k){
	vector< pair< int , char > > overlap;
	int n = arrive.size();  
	for(int i = 0 ; i < n ; i++){
		overlap.push_back({arrive[i],'y'}); 
		overlap.push_back({depart[i],'x'}); 
	}
	sort(overlap.begin(), overlap.end()); 
	int cnt = 0, maxi = 0;  
	for(int i = 0 ; i < 2 * n ; i++){
		if(overlap[i].second == 'y') cnt++; 
		else cnt--; 
		maxi = max(maxi, cnt); 
	}
	return maxi <= k; 
}
int main(){
	int n , k; 
	cin >> n >> k; 
	vector< int > arrive(n), depart(n); 
	for(int i = 0 ; i < n ;i++) cin >> arrive[i]; 
	for(int j = 0 ; j < n ; j++) cin >> depart[j]; 
	bool ans = solve(arrive,depart,k); 
	if(ans) cout << "Possible" << endl; 
	else 
		cout << "Not Possible" << endl;	
	return 0; 
}
