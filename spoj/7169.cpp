#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int n; 
	cin >> n; 
	//int ans = 0; 
	map< string , int > mp; 
	for(int i = 0 ; i < n ; i++){
		string s; 
		cin >> s; 
		mp[s] += 1; 
	}
	int ans = 0; 
	ans += mp["3/4"]; 
	mp["1/4"] = max(0,mp["1/4"] - mp["3/4"]); 
	ans += ((mp["1/2"]+1)/2);
	mp["1/4"]  = max(0,mp["1/4"] - (mp["1/2"]%2)*2);
	ans += ((mp["1/4"]+3)/4); 
	cout << ans + 1<< endl; 
	return 0; 
}
