#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(int a , int b){
	if(b == 0) return a; 
	else return solve(b , a%b);
}
int main(){
	int t;
	cin >> t; 
	while(t--){
		int a; 
		string s; 
		cin >> a >> s; 
		int b = 0;  
		if( a == 0){
			cout << s << endl; 
			continue; 
		}
		if(s == "0"){
			cout << a << endl; 
			continue; 
		}
		for(int i = 0 ; i < (int) s.size() ; i++){
			b = b*10 + (s[i] - '0'); 
			b %= a; 
		}
		b %= a; 
		int ans = solve(a , b);
		cout << ans << endl; 
	}
	return 0; 
}
