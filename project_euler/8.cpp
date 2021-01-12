#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
ll mul(string s){
	ll ans = 1; 
	for(int i = 0 ; i < (int)s.size();i++){
		ans *= (s[i] - '0');
	}
	return ans; 
} 
int main(){
	string s=""; 
	for(int i = 0 ; i < 20 ; i++){
		string x; 
		cin >> x; 
		s += x; 
	}
	ll maxi = 0;  
	for(int i = 0 ; i + 13 < (int)s.size() ; i++){
		maxi = max(maxi,mul(s.substr(i,13)));
	}
	cout << maxi << endl;
	//while(1);  
	return 0; 
}
